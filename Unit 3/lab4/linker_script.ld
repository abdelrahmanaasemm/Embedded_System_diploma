/* linker_script for cortex-M4
Eng. Mazen Omar
*/

MEMORY
{
	flash (RX) : ORIGIN = 0X00000000 , LENGTH = 128K
	sram (RWX) : ORIGIN = 0x20000000 , LENGTH = 20K
}

SECTIONS
{
	.text : {
		*(.vectors*)
		*(.text*)
		*(.rodata)
		_E_text = . ;
	}> flash
	
	.data : {
		_S_data = . ;
		*(.data)
		. = ALIGN(4);
		_E_data = . ;
	}> sram AT> flash

	.bss : {
		_S_bss = . ;
		*(.bss)
		. = ALIGN(4);
		_E_bss = . ;
	}> sram
}