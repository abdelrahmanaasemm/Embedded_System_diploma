#include <stdio.h>

int main() {
      float n;
    printf("Enter a number:");
    scanf("%f",&n);
    if(n>0)
        printf("%.2f is positive.",n);
    else if (n<0)
        printf("%.2f is negative.",n);
    else
        printf("you entered 0.");
    return 0;
}
