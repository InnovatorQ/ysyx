ENTRY(_start)

MEMORY {
  mrom : ORIGIN = 0x20000000, LENGTH = 4K
  sram : ORIGIN = 0x0f000000, LENGTH = 8K
}

SECTIONS {
  . = ORIGIN(mrom);
  .text : {
    *(entry)
    *(.text*)
  } > mrom
  .rodata : {
    *(.rodata)
    rodata_end = .;
  } > mrom
  .data : {
    data_start = .;
    *(.data*)
  } > sram AT> mrom
  data_size = SIZEOF(.data);
  data_load_start = LOADADDR(.data);
  .bss : {
    *(.bss)
  } > sram

  _heap_start = ALIGN(4);
  . = _heap_start + 0x1000;
  _heap_end = .;

  _stack_top = .;
  . = 0x0f002000;
  _stack_pointer = .;
  
  end = .;
  _end = .;
}
