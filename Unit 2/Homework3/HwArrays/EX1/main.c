#include <stdio.h>

int main() {
float a[2][2];
float b[2][2];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("Enter a%d%d:",i+1,j+1);
            scanf("%f",&a[i][j]);
        }
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("Enter b%d%d:",i+1,j+1);
            scanf("%f",&b[i][j]);
        }
    }
    printf("Sum Of Matrix:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%.1f ",b[i][j]+a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
