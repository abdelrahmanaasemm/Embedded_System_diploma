#include "UART.h"

void UART_send_string(char* p_tx_string)
{
    while(p_tx_string != '\0')
    {
        UART0DR = (unsigned int)*p_tx_string;
        p_tx_string++;
    }
}
