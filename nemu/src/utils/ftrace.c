/*
 * ftrace.c - 函数调用跟踪功能实现
 * 
 * 实现了函数调用跟踪功能，主要包括：
 * 1. ELF文件解析：读取符号表获取函数信息
 * 2. 函数符号管理：存储和查找函数符号
 * 3. 调用跟踪：记录函数调用和返回
 */

#include <ftrace.h>
#include <elf.h>

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

/**
 * 根据地址查找对应的函数名
 * @param addr 要查找的地址
 * @return 函数名字符串，如果找不到返回NULL
 * 
 * 遍历所有已加载的函数符号，检查给定地址是否在某个函数的地址范围内
 */
static const char* find_symbol(vaddr_t addr) {
  for (int i = 0; i < symbol_count; i++) {
    // 检查地址是否在函数的地址范围内 [addr, addr+size)
    if (addr >= symbols[i].addr && addr < symbols[i].addr + symbols[i].size) {
      return symbols[i].name;
    }
  }
  return NULL;  // 没找到对应的函数
}

/**
 * 初始化ftrace功能，从ELF文件中读取函数符号信息
 * @param elf_file ELF文件路径
 * 
 * ELF文件解析步骤：
 * 1. 读取ELF文件头，验证文件格式
 * 2. 读取节头表，找到符号表和字符串表的位置
 * 3. 读取符号表，提取所有函数符号
 * 4. 将函数信息存储到全局数组中供后续使用
 */
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
  // 节头表包含了文件中所有节的信息，如符号表、字符串表等
  Elf32_Shdr *shdrs = malloc(ehdr.e_shnum * sizeof(Elf32_Shdr));
  fseek(fp, ehdr.e_shoff, SEEK_SET);  // 跳转到节头表位置
  if (fread(shdrs, sizeof(Elf32_Shdr), ehdr.e_shnum, fp) != ehdr.e_shnum) {
    Log("Failed to read section headers");
    free(shdrs);
    fclose(fp);
    return;
  }

  // 步骤3: 读取节头字符串表
  // 这个表存储了所有节的名称，用于查找特定的节
  Elf32_Shdr *shstrtab = &shdrs[ehdr.e_shstrndx];
  char *shstrtab_data = malloc(shstrtab->sh_size);
  fseek(fp, shstrtab->sh_offset, SEEK_SET);
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
    goto cleanup;
  }

  // 步骤5: 读取字符串表
  // 字符串表存储了所有符号的名称
  char *strtab_data = malloc(strtab->sh_size);
  fseek(fp, strtab->sh_offset, SEEK_SET);
  if (fread(strtab_data, strtab->sh_size, 1, fp) != 1) {
    Log("Failed to read string table");
    free(strtab_data);
    goto cleanup;
  }

  // 步骤6: 读取符号表
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
  int idx = 0;
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

/**
 * 记录函数调用
 * @param pc 调用指令的地址
 * @param target 被调用函数的地址
 * 
 * 输出格式：call [调用地址 -> 目标地址] 函数名
 * 使用缩进表示调用层次
 */
void ftrace_call(vaddr_t pc, vaddr_t target) {
  const char *func_name = find_symbol(target);  // 查找目标地址对应的函数名
  if (func_name) {
    // 输出缩进，表示调用层次
    for (int i = 0; i < call_depth; i++) printf("  ");
    // 输出函数调用信息
    printf("call [" FMT_WORD " -> " FMT_WORD "] %s\n", pc, target, func_name);
    
    // 同时输出到日志文件（如果启用了日志）
    log_write("FTRACE: ");
    for (int i = 0; i < call_depth; i++) log_write("  ");
    log_write("call [" FMT_WORD " -> " FMT_WORD "] %s\n", pc, target, func_name);
    
    call_depth++;  // 增加调用深度
  }
}

/**
 * 记录函数返回
 * @param pc 返回指令的地址
 * 
 * 输出格式：ret [返回地址]
 * 使用缩进表示调用层次
 */
void ftrace_ret(vaddr_t pc) {
  if (call_depth > 0) {
    call_depth--;  // 减少调用深度
    // 输出缩进，表示调用层次
    for (int i = 0; i < call_depth; i++) printf("  ");
    // 输出函数返回信息
    printf("ret  [" FMT_WORD "]\n", pc);
    
    // 同时输出到日志文件（如果启用了日志）
    log_write("FTRACE: ");
    for (int i = 0; i < call_depth; i++) log_write("  ");
    log_write("ret  [" FMT_WORD "]\n", pc);
  }
}
