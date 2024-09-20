#include <stdio.h>
long long Pow(int base,int power);

int main() {
    int base,power;
    printf("Enter base number:");
    scanf("%d",&base);
    printf("Enter power number(positive integer)");
    scanf("%d",&power);
    printf("%d^%d = %lld",base,power, Pow(base, power));

    return 0;

}
long long Pow(int base,int power){
if(power!=0)
    return( base * Pow(base,power-1));
else
    return 1;
}