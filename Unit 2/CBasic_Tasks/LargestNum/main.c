#include <stdio.h>
#include "math.h"
int main() {
double x,y,z;
    printf("Enter three numbers:");
    scanf("%lf %lf %lf",&x,&y,&z);
    double maxi;
    maxi=x;
    if(maxi<y){
        maxi=y;
    }
    if(maxi<z){
        maxi=z;
    }
    printf("%lf",maxi);
return 0;
}
