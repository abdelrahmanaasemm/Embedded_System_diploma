#include <stdio.h>
#include "string.h"
int main() {
    char str[1000];
    printf("Enter a string :");
    scanf("%[^\n]s",str);
    int n=strlen(str);
    printf("Reverse string is :");
    while (n--){
        printf("%c",str[n]);
    }
    return 0;
}
