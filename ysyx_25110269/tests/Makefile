NAME = char-test
WORK_DIR = $(shell pwd)
DST_DIR =  $(WORK_DIR)/build/$(NAME)

CC = riscv64-unknown-elf-gcc
OBJCOPY = riscv64-unknown-elf-objcopy
OBJDUMP = riscv64-unknown-elf-objdump

CFLAGS += -march=rv32e -mabi=ilp32e -nostdlib -nostartfiles -ffreestanding -fno-stack-protector
COPY_FALGS = -O binary --only-section=.text 
CFLAGS += -Ttext=0x20000000

$(DST_DIR)/$(NAME).elf : $(NAME).c
	@rm -rf $(DST_DIR)
	@mkdir -p $(DST_DIR) && echo + CC $<
	@$(CC) $(CFLAGS) -o $@ $(realpath $<)

$(DST_DIR)/$(NAME).bin : $(DST_DIR)/$(NAME).elf
	@$(OBJDUMP) -d $< > $(DST_DIR)/$(NAME).txt
	@echo $(OBJCOPY) $(COPY_FALGS) $< $@ 
	@$(OBJCOPY) $(COPY_FALGS) $< $@ 

$(DST_DIR)/$(NAME).bin : $(DST_DIR)/$(NAME).elf

image : $(DST_DIR)/$(NAME).bin

run : image
	$(MAKE) -C $(ysyxSoC_HOME) run OBJ_TAR=$(DST_DIR)/$(NAME).bin

clean : 
	@echo rm -rf ./build
	@rm -rf ./build
