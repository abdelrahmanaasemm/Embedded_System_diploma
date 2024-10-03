/* startup.c
Eng. Mazen Omar 
*/
#include <stdint.h>

extern int main(void);
void Reset_handler();



void Default_handler()
{
	Reset_handler();
}

void NMI_handler() __attribute__((weak, alias("Default_handler")));
void H_Fault_handler() __attribute__((weak, alias("Default_handler")));
void MM_Fault_handler() __attribute__((weak, alias("Default_handler")));
void Bus_Fault() __attribute__((weak, alias("Default_handler")));
void Usage_Fault_handler() __attribute__((weak, alias("Default_handler")));

/*
	Define the function(ISR) you want to use here
*/

static unsigned long Stack_top[256];	// To make stack size equal 1024 byte.
//extern unsigned int _stack_top;

void (* const g_p_fn_Vectors[])() __attribute__ ((section(".vectors"))) = 
{	/* This attribute store this array in .vectors section*/
	(void (*)()) ((uint32_t)Stack_top + sizeof(Stack_top)),		
	&Reset_handler,
	&NMI_handler,
	&H_Fault_handler,
	&MM_Fault_handler,
	&Bus_Fault,
	&Usage_Fault_handler
};

extern unsigned int _E_text;
extern unsigned int _S_data;
extern unsigned int _E_data;
extern unsigned int _S_bss ;
extern unsigned int _E_bss ;


void Reset_handler()
{
	unsigned int data_size = (unsigned char*)&_E_data - (unsigned char*)&_S_data;
	unsigned char* p_src = (unsigned char*)&_E_text;
	unsigned char* p_dst = (unsigned char*)&_S_data;
	int k;
	for (k = 0; k < data_size; k++)
	{
		*((unsigned char*)p_dst++) = *((unsigned char*)p_src++);		// Copying .data to RAM
	}

	unsigned int bss_size = (unsigned char*)&_E_bss - (unsigned char*)&_S_bss;
	p_dst = (unsigned char*)&_S_bss;
	for (k = 0; k < bss_size; k++)
	{
		*((unsigned char*)p_dst++) = (unsigned char)0;					// Initializing .bss with zeros	
	}

	main();
}