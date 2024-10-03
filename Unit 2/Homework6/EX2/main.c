#include <stdio.h>

int main() {
    char arr[27]="ABCDEFGHIGKLMNOPQRSTUVWXYZ";
    char *ptr=arr;
    for (int i = 0; i < 26; ++i) {
        printf("%c ",*ptr);
        ptr++;
    }
    return 0;
}
