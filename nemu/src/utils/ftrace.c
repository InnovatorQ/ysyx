#include <ftrace.h>
#include <elf.h>

typedef struct {
  char *name;
  vaddr_t addr;
  uint32_t size;
} Symbol;

static Symbol *symbols = NULL;
static int symbol_count = 0;
static int call_depth = 0;

static const char* find_symbol(vaddr_t addr) {
  for (int i = 0; i < symbol_count; i++) {
    if (addr >= symbols[i].addr && addr < symbols[i].addr + symbols[i].size) {
      return symbols[i].name;
    }
  }
  return NULL;
}

void init_ftrace(const char *elf_file) {
  if (!elf_file) return;
  
  FILE *fp = fopen(elf_file, "rb");
  if (!fp) {
    Log("Cannot open ELF file: %s", elf_file);
    return;
  }

  Elf32_Ehdr ehdr;
  if (fread(&ehdr, sizeof(ehdr), 1, fp) != 1) {
    Log("Failed to read ELF header");
    fclose(fp);
    return;
  }
  
  if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0) {
    Log("Not a valid ELF file");
    fclose(fp);
    return;
  }

  // Read section headers
  Elf32_Shdr *shdrs = malloc(ehdr.e_shnum * sizeof(Elf32_Shdr));
  fseek(fp, ehdr.e_shoff, SEEK_SET);
  if (fread(shdrs, sizeof(Elf32_Shdr), ehdr.e_shnum, fp) != ehdr.e_shnum) {
    Log("Failed to read section headers");
    free(shdrs);
    fclose(fp);
    return;
  }

  // Find string table
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

  // Find symbol table and string table
  Elf32_Shdr *symtab = NULL, *strtab = NULL;
  for (int i = 0; i < ehdr.e_shnum; i++) {
    char *name = shstrtab_data + shdrs[i].sh_name;
    if (strcmp(name, ".symtab") == 0) {
      symtab = &shdrs[i];
    } else if (strcmp(name, ".strtab") == 0) {
      strtab = &shdrs[i];
    }
  }

  if (!symtab || !strtab) {
    Log("Symbol table or string table not found");
    goto cleanup;
  }

  // Read string table
  char *strtab_data = malloc(strtab->sh_size);
  fseek(fp, strtab->sh_offset, SEEK_SET);
  if (fread(strtab_data, strtab->sh_size, 1, fp) != 1) {
    Log("Failed to read string table");
    free(strtab_data);
    goto cleanup;
  }

  // Read symbols
  int sym_count = symtab->sh_size / sizeof(Elf32_Sym);
  Elf32_Sym *syms = malloc(symtab->sh_size);
  fseek(fp, symtab->sh_offset, SEEK_SET);
  if (fread(syms, symtab->sh_size, 1, fp) != 1) {
    Log("Failed to read symbol table");
    free(syms);
    free(strtab_data);
    goto cleanup;
  }

  // Count function symbols
  symbol_count = 0;
  for (int i = 0; i < sym_count; i++) {
    if (ELF32_ST_TYPE(syms[i].st_info) == STT_FUNC && syms[i].st_size > 0) {
      symbol_count++;
    }
  }

  symbols = malloc(symbol_count * sizeof(Symbol));
  int idx = 0;
  for (int i = 0; i < sym_count; i++) {
    if (ELF32_ST_TYPE(syms[i].st_info) == STT_FUNC && syms[i].st_size > 0) {
      symbols[idx].name = strdup(strtab_data + syms[i].st_name);
      symbols[idx].addr = syms[i].st_value;
      symbols[idx].size = syms[i].st_size;
      idx++;
    }
  }

  Log("Loaded %d function symbols for ftrace", symbol_count);

  free(syms);
  free(strtab_data);
cleanup:
  free(shstrtab_data);
  free(shdrs);
  fclose(fp);
}

void ftrace_call(vaddr_t pc, vaddr_t target) {
  const char *func_name = find_symbol(target);
  if (func_name) {
    for (int i = 0; i < call_depth; i++) printf("  ");
    printf("call [" FMT_WORD " -> " FMT_WORD "] %s\n", pc, target, func_name);
    call_depth++;
  }
}

void ftrace_ret(vaddr_t pc) {
  if (call_depth > 0) {
    call_depth--;
    for (int i = 0; i < call_depth; i++) printf("  ");
    printf("ret  [" FMT_WORD "]\n", pc);
  }
}
