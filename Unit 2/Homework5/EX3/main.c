#include <stdio.h>
typedef struct complex{
    float real,img;
}complex;
void sum(complex fir,complex sec);
int main() {
complex fir,sec;
    printf("For 1st complex number  \nEnter real and imaginary respectively: ");
    scanf("%f",&fir.real);
    scanf("%f",&fir.img);
    printf("For 2nd complex number \n"
           "Enter real and imaginary respectively:");
    scanf("%f",&sec.real);
    scanf("%f",&sec.img);
    sum(fir,sec);
    return 0;
}
void sum(complex fir,complex sec){
    printf("Sum = %.1f+%.1fi",fir.real+sec.real,fir.img+sec.img);

}