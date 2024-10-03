#include "uart.h"
const int asem=100;
unsigned char string_buffer[100]="Abdelrahman asem abdelnaby ahmed ahmed elbandey";
unsigned char buffer[100]="Abdelrahman asem abdelnaby ahmed ahmed elbandey";
void main(void){

    Uart_Send_string(string_buffer);
}