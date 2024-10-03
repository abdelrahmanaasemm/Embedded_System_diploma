#include <stdint.h>

#define RCC_BASE           0x40021000
#define PORTA_BASE         0x40010800
#define RCC_APB2ENR        *(volatile uint32_t*) (RCC_BASE + 0x18)
#define GPIOA_CRH          *(volatile uint32_t*) (PORTA_BASE + 0x04)

#define SET_BIT(X, POS)    ((X) |= (1U << (POS)))
#define CLEAR_BIT(X, POS)  ((X) &= ~(1U << (POS)))

typedef volatile unsigned int vuint32_t;

typedef union {
    vuint32_t all_fields;
    struct {
        vuint32_t reserved:13;
        vuint32_t pin13:1;
        vuint32_t reserved2:18;
    } pin;
} R_ODR_t;

#define R_ODR  ((volatile R_ODR_t*)(PORTA_BASE + 0x0C)) //This macro fixed the probelm.
//volatile R_ODR_t *R_ODR = (volatile R_ODR_t*)(PORTA_BASE + 0x0C);   // And this is wrong. I don't know why!

int main(void)
{
    // Enable clock for GPIO Port A
    SET_BIT(RCC_APB2ENR, 2);

    // Configure Pin 13 as General-purpose output push-pull
    GPIOA_CRH &= 0xFF0FFFFF;   // Clear configuration for Pin 13
    GPIOA_CRH |= 0x00200000;   // Set Pin 13 as General-purpose output push-pull
    volatile int i;
    while (1)
    {
        // Clear Pin 13 (set to low)
        R_ODR->pin.pin13 = 0;

        // Delay
        for (i = 0; i < 5000; i++);

        // Set Pin 13 (set to high)
        R_ODR->pin.pin13 = 1;

        // Delay
        for (i = 0; i < 5000; i++);
    }

    return 0;
}
