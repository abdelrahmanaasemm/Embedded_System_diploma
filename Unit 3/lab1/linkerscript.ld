ENTRY(reset)
MEMORY
{
ROM (rwx):ORIGIN = 0x00000000 , LENGTH = 64M
}
SECTIONS{
  . = 0x10000;
    .reset . :
    {
      startup.o(.text)
    }>ROM
    .text :
    {
      *(.text) *(.rodata)
    }>ROM
    .data :
    {
     *(.data)
    }>ROM
    .bss :
    {
     *(.bss) *(COMMON)
    }>ROM
    . = . + 0x10000 ;
    stack_top = . ;
}
