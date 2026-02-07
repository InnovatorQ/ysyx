ENTRY(_start)

MEMORY {
  mrom :  ORIGIN = 0x20000000, LENGTH = 4K
  sram :  ORIGIN = 0x0f000000, LENGTH = 8K
  flash : ORIGIN = 0x30000000, LENGTH = 16M
  psram : ORIGIN = 0x80000000, LENGTH = 4M
}

SECTIONS {
  . = ORIGIN(flash);
  .text : {
    *(entry)
    *(.text*)
  } > flash
  .rodata : {
    *(.rodata*)
    rodata_end = .;
  } > sram AT> flash
  .data : {
    data_start = .;
    *(.data*)
  } > psram AT> flash
  data_size = SIZEOF(.data);
  data_load_start = LOADADDR(.data);
  .bss : {
    *(.bss)
  } > psram

  _stack_top = ALIGN(0x1000);
  . = _stack_top + 0x1000;
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = ALIGN(0x1000);
}
