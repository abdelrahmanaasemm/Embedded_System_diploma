#include <stdio.h>
#include "string.h"
int main() {
char str[1000];
    printf("Enter a string :");
scanf("%[^\n]s",str);
    fflush(stdin);
char c;
printf("Enter a character to find frequency:");
    scanf("%c",&c);
int freq=0;
    for (int j = 0; j <strlen(str) ; ++j) {
        if(str[j]==c){
            freq++;
        }
    }
    printf("Frequency of e = %d",freq);

return 0;
}
