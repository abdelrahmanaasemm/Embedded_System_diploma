#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and column of matrix:");
    scanf("%d%d", &r, &c);
    int arr[r][c];
    printf("Enter elements of matrix:\n");
    for (int i = 1; i <= r; ++i) {
        for (int j = 1; j <= c; ++j) {
            printf("Enter elements a%d%d:", i, j);
            scanf("%d", &arr[i - 1][j - 1]);
        }
    }
    printf("Entered matrix:\n");

    for (int i = 1; i <= r; ++i) {
        for (int j = 1; j <= c; ++j) {
            printf("%d ", arr[i - 1][j - 1]);
        }
        printf("\n");
    }
    int TransposeMatt[c][r];
    for (int j = 1; j <= c; ++j) {
        for (int i = 1; i <= r; ++i) {
            TransposeMatt[j - 1][i - 1]=arr[i-1][j-1];
        }
    }
    printf("Transpose of Matrix:\n");
    for (int j = 1; j <= c; ++j) {
    for (int i = 1; i <= r; ++i) {
            printf("%d ", TransposeMatt[j - 1][i - 1]);
        }
        printf("\n");
    }
    return 0;
}
