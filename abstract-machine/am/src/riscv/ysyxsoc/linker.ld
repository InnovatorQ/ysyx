ENTRY(_start)

MEMORY {
  mrom :  ORIGIN = 0x20000000, LENGTH = 4K
  sram :  ORIGIN = 0x0f000000, LENGTH = 8K
  flash : ORIGIN = 0x30000000, LENGTH = 16M
  psram : ORIGIN = 0x80000000, LENGTH = 4M
  sdram : ORIGIN = 0xa0000000, LENGTH = 32M
}

SECTIONS {
  . = ORIGIN(flash);
  .boot : {
    *(entry*)
    *(fsbl)
  } > flash

  .ssbl : {
    ssbl_start = .;
    *(ssbl)
  } > sram AT > flash
  ssbl_size = SIZEOF(.ssbl);
  ssbl_load_start = LOADADDR(.ssbl);

  .text : {
    text_start = .;
    *(.text*)
  } > sdram AT> flash
  text_size = SIZEOF(.text);
  text_load_start = LOADADDR(.text);

  .rodata : {
    rodata_start = .;
    *(.rodata*)
    *(.srodata*)
    rodata_end = .;
  } > sdram AT> flash
  rodata_size = SIZEOF(.rodata);
  rodata_load_start = LOADADDR(.rodata);

  .data : {
    data_start = .;
    *(.data*)
    *(.sdata*)
    _data_end = .;
  } > sdram AT> flash
  data_size = SIZEOF(.data);
  data_load_start = LOADADDR(.data);

  .bss : {
    bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    bss_end = .;
  } > sdram 

  _stack_pointer = ORIGIN(sram) + LENGTH(sram);

  end = .;
  _end = .;

  _heap_start = ALIGN(0x1000);
  _heap_end = ORIGIN(sdram) + LENGTH(sdram  );
 
}
