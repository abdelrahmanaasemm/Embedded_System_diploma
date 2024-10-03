/* startup.c
Eng. Mazen Omar 
*/
#include <stdint.h>

extern int main(void);
void reset_handler();

extern unsigned int _stack_top;

void Default_handler()
{
	reset_handler();
}

void NMI_handler() __attribute__((weak, alias("Default_handler")));
void H_Fault_handler() __attribute__((weak, alias("Default_handler")));
void MM_Fault_handler() __attribute__((weak, alias("Default_handler")));
void Bus_Fault() __attribute__((weak, alias("Default_handler")));
void Usage_Fault_handler() __attribute__((weak, alias("Default_handler")));

/*
	Define the function(ISR) you want to use here
*/

uint32_t vectors[] __attribute__ ((section(".vectors"))) = {	/* This attribute store this array in .vectors section*/
	(uint32_t) &_stack_top,
	(uint32_t) &reset_handler,
	(uint32_t) &NMI_handler,
	(uint32_t) &H_Fault_handler,
	(uint32_t) &MM_Fault_handler,
	(uint32_t) &Bus_Fault,
	(uint32_t) &Usage_Fault_handler
};

extern unsigned int _E_text;
extern unsigned int _S_data;
extern unsigned int _E_data;
extern unsigned int _S_bss ;
extern unsigned int _E_bss ;


void reset_handler()
{
	unsigned int data_size = (unsigned char*)&_E_data - (unsigned char*)&_S_data;
	unsigned int* p_src = (unsigned char*)&_E_text;
	unsigned int* p_dst = (unsigned char*)&_S_data;
	int k;
	// Copying .data to RAM
	for (k = 0; k < data_size; k++)
	{
		*((unsigned char*)p_dst++) = *((unsigned char*)p_src++);		
	}

	// Initializing .bss with zeros
	unsigned int bss_size = (unsigned char*)&_E_bss - (unsigned char*)&_S_bss;
	p_dst = (unsigned char*)&_S_bss;
	for (k = 0; k < bss_size; k++)
	{
		*((unsigned char*)p_dst++) = (unsigned char)0;						
	}

	// Jumping to main function
	main();
}