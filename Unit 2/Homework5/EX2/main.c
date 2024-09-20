#include <stdio.h>
typedef struct len{
    int feet ;
    float inch;
}len;
int main() {
    len fir,sec;
    printf("Enter information for 1st distance \nEnter feet:");
    scanf("%d",&fir.feet);
    printf("Enter inch:");
    scanf("%f",&fir.inch);
    printf("Enter information for 2nd distance \nEnter feet:");
    scanf("%d",&sec.feet);
    printf("Enter inch:");
    scanf("%f",&sec.inch);
    if(fir.inch+sec.inch<12){
        printf("Sum of distances= %d-%.1f",fir.feet+sec.feet,fir.inch+sec.inch);
    }else{
        int re=(fir.inch+sec.inch)/12;
        float newInch=(fir.inch+sec.inch)-re*12;
        printf("Sum of distances= %d-%.1f",fir.feet+sec.feet+re,newInch);


    }

    return 0;
}
