#include "UART.h"

char str[50] = "Learn-In-Depth: <Mazen Omar>";

void main()
{
    UART_send_string(str);
}
