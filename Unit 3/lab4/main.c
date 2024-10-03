#include <stdint.h>

#define SYSCTL_RCGC2_R     (*((volatile uint32_t *)0x400FE108))
#define GPIO_PORTF_DIR_R   (*((volatile uint32_t *)0x40025400))
#define GPIO_PORTF_DEN_R   (*((volatile uint32_t *)0x4002551C))
#define GPIO_PORTF_DATA_R  (*((volatile uint32_t *)0x400253FC))
  
#define TOGGLE_BIT(REG,POS)     (REG^=(1<<POS))
#define SET_BIT(REG,POS)        (REG|=(1<<POS))
#define CLEAR_BIT(REG,POS)      (REG&=~(1<<POS))

int main() 
{
    volatile int i;
    SYSCTL_RCGC2_R |= 0x00000020;
    for(i = 0; i < 200; i++);
    
    SET_BIT(GPIO_PORTF_DIR_R,3);

    SET_BIT(GPIO_PORTF_DEN_R,3);

    while (1) 
    {    
        TOGGLE_BIT(GPIO_PORTF_DATA_R,3);
        for(i = 0; i < 20000; i++);       
    }

    return 0;
}