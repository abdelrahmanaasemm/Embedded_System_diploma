#include <stdio.h>

int main() {
char str[1000];
    printf("Enter a string :");
    scanf("%[^\n]s",str);
    int i=0;
    while (str[i]!='\0'){
        i++;
    }
    printf("length of string: %d",i);
return 0;
}
