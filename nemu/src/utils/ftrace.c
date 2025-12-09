#include <ftrace.h>
#include <elf.h>

/*
ElfN_Addr       Unsigned program address, uintN_t
           ElfN_Off        Unsigned file offset, uintN_t
           ElfN_Section    Unsigned section index, uint16_t
           ElfN_Versym     Unsigned version symbol information, uint16_t
           Elf_Byte        unsigned char
           ElfN_Half       uint16_t
           ElfN_Sword      int32_t
           ElfN_Word       uint32_t
           ElfN_Sxword     int64_t
           ElfN_Xword      uint64_t

*/

// 函数符号结构体，用于存储从ELF文件中解析出的函数信息
typedef struct {
  char *name;      // 函数名称（字符串）
  vaddr_t addr;    // 函数起始地址
  uint32_t size;   // 函数大小（字节数）
} Symbol;

// 全局变量，用于管理函数符号和调用状态
static Symbol *symbols = NULL;    // 函数符号数组
static int symbol_count = 0;      // 函数符号总数
static int call_depth = 0;        // 当前函数调用深度，用于输出缩进

// 函数调用栈，用于跟踪当前调用的函数
#define MAX_CALL_DEPTH 64
static const char* call_stack[MAX_CALL_DEPTH];  // 存储每层调用的函数名


static const char* find_symbol(vaddr_t addr) {
  for (int i = 0; i < symbol_count; i++) {
    // 检查地址是否在函数的地址范围内 [addr, addr+size)
    if (addr >= symbols[i].addr && addr < symbols[i].addr + symbols[i].size) {
      return symbols[i].name;
    }
  }
  return NULL;  // 没找到对应的函数
}


void init_ftrace(const char *elf_file) {
  // 如果没有提供ELF文件，直接返回
  if (!elf_file) return;
  
  // 打开ELF文件进行二进制读取
  FILE *fp = fopen(elf_file, "rb");
  if (!fp) {
    Log("Cannot open ELF file: %s", elf_file);
    return;
  }

  // 步骤1: 读取ELF文件头
  /*
  typedef struct
{
  unsigned char	e_ident[EI_NIDENT];	 Magic number and other info 
  Elf32_Half	e_type;			 Object file type 
  Elf32_Half	e_machine;		 Architecture 
  Elf32_Word	e_version;		 Object file version 
  Elf32_Addr	e_entry;		 Entry point virtual address 
  Elf32_Off	e_phoff;		 Program header table file offset 
  Elf32_Off	e_shoff;		 Section header table file offset 
  Elf32_Word	e_flags;		 Processor-specific flags 
  Elf32_Half	e_ehsize;		 ELF header size in bytes 
  Elf32_Half	e_phentsize;		 Program header table entry size 
  Elf32_Half	e_phnum;		 Program header table entry count 
  Elf32_Half	e_shentsize;		 Section header table entry size 
  Elf32_Half	e_shnum;		 Section header table entry count 
  Elf32_Half	e_shstrndx;		 Section header string table index 
} Elf32_Ehdr; 
  */
  Elf32_Ehdr ehdr;  // ELF文件头结构体
  if (fread(&ehdr, sizeof(ehdr), 1, fp) != 1) {
    Log("Failed to read ELF header");
    fclose(fp);
    return;
  }
  
  // 验证ELFmagic，确保这是一个有效的ELF文件
  if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0) {
    Log("Not a valid ELF file");
    fclose(fp);
    return;
  }

  // 步骤2: 读取节头表（Section Header Table）
  /*
  typedef struct
{
  Elf32_Word	sh_name;		 Section name (string tbl index) 
  Elf32_Word	sh_type;		 Section type 
  Elf32_Word	sh_flags;		 Section flags 
  Elf32_Addr	sh_addr;		 Section virtual addr at execution 
  Elf32_Off	sh_offset;		 Section file offset 
  Elf32_Word	sh_size;		 Section size in bytes 
  Elf32_Word	sh_link;		 Link to another section 
  Elf32_Word	sh_info;		 Additional section information 
  Elf32_Word	sh_addralign;  Section alignment 
  Elf32_Word	sh_entsize;		 Entry size if section holds table 
} Elf32_Shdr;
  */
  Elf32_Shdr *shdrs = malloc(ehdr.e_shnum * sizeof(Elf32_Shdr));
  fseek(fp, ehdr.e_shoff, SEEK_SET);  // 跳转到节头表首地址
  if (fread(shdrs, sizeof(Elf32_Shdr), ehdr.e_shnum, fp) != ehdr.e_shnum) { //保证节头数量正确
    Log("Failed to read section headers");
    free(shdrs);
    fclose(fp);
    return;
  }

  // 步骤3: 读取节头字符串表项
  // 这个表项存储了所有节的名称，用于查找特定的节
  Elf32_Shdr *shstrtab = &shdrs[ehdr.e_shstrndx]; //指向节头字符串表项的地址
  char *shstrtab_data = malloc(shstrtab->sh_size);  
  fseek(fp, shstrtab->sh_offset, SEEK_SET); //跳转到节头字符串表项指向的数据（组成所有节名称的字符）的地址
  if (fread(shstrtab_data, shstrtab->sh_size, 1, fp) != 1) {
    Log("Failed to read section header string table");
    free(shstrtab_data);
    free(shdrs);
    fclose(fp);
    return;
  }

  // 步骤4: 查找符号表(.symtab)和字符串表(.strtab)
  Elf32_Shdr *symtab = NULL, *strtab = NULL;
  for (int i = 0; i < ehdr.e_shnum; i++) {
    //sh_name是一个偏移量索引，当在字符串首地址中加上了这个偏移量，才能得到正确的节名称
    char *name = shstrtab_data + shdrs[i].sh_name;  // 获取节名称
    if (strcmp(name, ".symtab") == 0) {
      symtab = &shdrs[i];  // 找到符号表
    } else if (strcmp(name, ".strtab") == 0) {
      strtab = &shdrs[i];  // 找到字符串表
    }
  }

  // 检查是否找到了必需的表
  if (!symtab || !strtab) {
    Log("Symbol table or string table not found");
    goto cleanup; //用cleanup，省点行数
  }

  // 步骤5: 读取字符串表
  // 字符串表存储了所有符号的名称
  char *strtab_data = malloc(strtab->sh_size);
  fseek(fp, strtab->sh_offset, SEEK_SET); //指向节头表中的.strtab中的偏移量，从而找到字符串表
  if (fread(strtab_data, strtab->sh_size, 1, fp) != 1) {
    Log("Failed to read string table");
    free(strtab_data);
    goto cleanup;
  }

  // 步骤6: 读取符号表
  /*
  typedef struct
{
  Elf32_Word	st_name;		Symbol name (string tbl index) 
  Elf32_Addr	st_value;		Symbol value 
  Elf32_Word	st_size;		Symbol size 
  unsigned char	st_info;	Symbol type and binding 
  unsigned char	st_other;	Symbol visibility 
  Elf32_Section	st_shndx;	Section index 
} Elf32_Sym;
  */
  int sym_count = symtab->sh_size / sizeof(Elf32_Sym);  // 计算符号数量
  Elf32_Sym *syms = malloc(symtab->sh_size);
  fseek(fp, symtab->sh_offset, SEEK_SET);
  if (fread(syms, symtab->sh_size, 1, fp) != 1) {
    Log("Failed to read symbol table");
    free(syms);
    free(strtab_data);
    goto cleanup;
  }

  // 步骤7: 统计函数符号数量
  // 只关心类型为STT_FUNC（函数）且大小大于0的符号
  symbol_count = 0;
  for (int i = 0; i < sym_count; i++) {
    if (ELF32_ST_TYPE(syms[i].st_info) == STT_FUNC && syms[i].st_size > 0) {
      symbol_count++;
    }
  }

  // 步骤8: 分配内存并存储函数符号信息
  symbols = malloc(symbol_count * sizeof(Symbol));
  int idx = 0;    // 函数符号数组的索引
  for (int i = 0; i < sym_count; i++) {
    if (ELF32_ST_TYPE(syms[i].st_info) == STT_FUNC && syms[i].st_size > 0) {
      // 复制函数名称（需要动态分配内存）
      symbols[idx].name = strdup(strtab_data + syms[i].st_name);
      symbols[idx].addr = syms[i].st_value;  // 函数地址
      symbols[idx].size = syms[i].st_size;   // 函数大小
      idx++;
    }
  }

  Log("Loaded %d function symbols for ftrace", symbol_count);

  // 清理临时分配的内存
  free(syms);
  free(strtab_data);
cleanup:
  free(shstrtab_data);
  free(shdrs);
  fclose(fp);
}

void ftrace_call(vaddr_t pc, vaddr_t target) {
  const char *func_name = find_symbol(target);  // 查找目标地址对应的函数名
  if (func_name) {
    // 输出缩进，表示调用层次
    //for (int i = 0; i < call_depth; i++) printf("  ");
    // 输出函数调用信息
    //printf("call [" FMT_WORD " -> " FMT_WORD "] %s\n", pc, target, func_name);
    
    // 同时输出到日志文件
    log_write("FTRACE: ");
    for (int i = 0; i < call_depth; i++) log_write("  ");
    log_write("call [" FMT_WORD " -> " FMT_WORD "] %s\n", pc, target, func_name);
    
    // 将函数名压入调用栈
    if (call_depth < MAX_CALL_DEPTH) {
      call_stack[call_depth] = func_name;
    }
    call_depth++;  // 增加调用深度
  }
}

void ftrace_ret(vaddr_t pc) {
  if (call_depth > 0) {
    call_depth--;  // 减少调用深度
    
    // 获取返回的函数名（从调用栈中取出）
    const char *func_name = (call_depth < MAX_CALL_DEPTH) ? call_stack[call_depth] : "unknown";
    
    // 输出缩进，表示调用层次
    for (int i = 0; i < call_depth; i++) printf("  ");
    // 输出函数返回信息，包含函数名
    printf("ret  [" FMT_WORD "] %s\n", pc, func_name);
    
    // 同时输出到日志文件（如果启用了日志）
    log_write("FTRACE: ");
    for (int i = 0; i < call_depth; i++) log_write("  ");
    log_write("ret  [" FMT_WORD "] %s\n", pc, func_name);
  }
}
