#include <stdio.h>

int main() {
    printf("Enter no of elements :");
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <n ; ++i) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched :");
    int element;
    scanf("%d",&element);
int loc=-1;
    for (int i = 0; i < n; ++i) {
        if(element==arr[i]){
            loc=i+1;
            break;
        }
    }
    printf("Number founded at the location = %d",loc);

    return 0;
}
