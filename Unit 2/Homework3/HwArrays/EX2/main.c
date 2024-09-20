#include <stdio.h>

int main() {
    int NofData;
    printf("Enter the numbers of data:");
    scanf("%d",&NofData);
    float Average=0;
    for (int i = 1; i <= NofData; ++i) {
        float Number;
        printf("%d. Enter number:",i);
        scanf("%f",&Number);
        fflush(stdin);
        fflush(stdout);
        Average+=Number;
    }
    Average/=NofData;
    printf("Average = %f",Average);
    return 0;
}
