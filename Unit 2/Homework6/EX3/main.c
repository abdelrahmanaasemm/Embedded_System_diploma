#include <stdio.h>
#include "string.h"
int main() {
char string[100];
    scanf("%[^\n]s",string);
    char *ptr=string;
    char size= strlen(string);
    while (size-->=0){
        printf("%c",string[size]);

    }

    return 0;
}
