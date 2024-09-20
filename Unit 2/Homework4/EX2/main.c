#include <stdio.h>
long long factiorial(int n){
    if(n!=1)
    return n* factiorial(n-1);
}
int main() {
    printf("Enter an positive integer:");
    int n;
    scanf("%d",&n);
    printf("Factorial of %d = %lld",n, factiorial(n));
    return 0;
}
