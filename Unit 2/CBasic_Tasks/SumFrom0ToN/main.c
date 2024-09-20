#include <stdio.h>

int main() {
  int n;
    printf("Enter an integer:");
    scanf("%d",&n);
    long long sum=n*(n+1)/2;
    printf("Sum = %lld",sum);
    return 0;
}
