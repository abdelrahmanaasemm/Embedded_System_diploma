#include <stdio.h>

int main() {
int n;
printf("Enter an integer:");
    scanf("%d",&n);
    if(n<0){
        printf("Error!!! Factorial of negative number does not exist.");
        return 0;
    }
    else{
        long long Factorial=1;
        for (int i = n; i >= 1; i--) {
            Factorial*=i;
        }
        printf("Factorial = %lld",Factorial);
    }
return 0;
}
