#include <stdio.h>

int main() {
    int n;
    printf("Input the number of elements to store in the array (max 15) :");
    scanf("%d",&n);
int arr[n];
    printf("Input 5 number of elements in the array :\n");
    for (int i = 0; i < n; ++i) {
        printf("element - %d :" ,i+1);
        scanf("%d",&arr[i]);
    }
    int *ptr=&arr[n-1];
    int i=0;
    while (ptr!=arr){
        printf("element - %d : %d\n",n-i,*ptr);
        i++;
        ptr--;
    }
    printf("element - %d : %d\n",n-i,*ptr);
return 0;
}
