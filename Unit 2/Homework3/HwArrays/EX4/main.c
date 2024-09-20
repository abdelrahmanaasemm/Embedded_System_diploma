#include <stdio.h>

int main() {
    int n;
    printf("Enter no of elements :");
    scanf("%d",&n);
    int arr[n+1];
    for (int i = 0; i < n; ++i) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be inserted :");
   int element;
    scanf("%d",&element);
    printf("Enter the location :");
    int loc;
    scanf("%d",&loc);
    for (int i = n; i >loc-1 ; --i) {
        arr[i]=arr[i-1];
    }
    arr[loc-1]=element;
    for (int i = 0; i <=n ; ++i) {
        printf("%d ",arr[i]);
    }

    return 0;
}
