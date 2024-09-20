#include <stdio.h>
#define PI 3.14159265359
int main() {

    double area;
    double rad;
    printf("Enter the radius: ");
    scanf("%lf",&rad);
    scanf("%lf",&area);

    area=rad*rad*PI;
    printf("Area = %lf",area);
    return 0;
}
