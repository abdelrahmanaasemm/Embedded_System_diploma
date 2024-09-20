#include <stdio.h>

long long primeNumbers[1000000];
long long NotPrimesNumber[1000000] = {0};

int prime(int l, int r) {
    int end=r;
    for (int i = 2; i <= r; ++i) {
        if (!NotPrimesNumber[i]) {
            primeNumbers[i] = 1;
            for (int j = i * i; j <= end; j += i) {
                NotPrimesNumber[j] = 1;
            }
        }
    }
}

int main() {
    int l, r;
    printf("Enter two numbers(intervals):");
    scanf("%d%d", &l, &r);
    printf("prime numbers between %d and %d are: ", l, r);
    prime(l,r);
    for (int i = l; i <=r ; ++i) {
        if(primeNumbers[i]){
            printf("%lld ",i);
        }
    }
    return 0;
}
