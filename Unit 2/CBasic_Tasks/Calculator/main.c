#include <stdio.h>

int main() {
   char op;
    printf("Enter operator either + or - or * or divide :");
   scanf("%c",&op);
    float n1,n2;
    printf("Enter two operands:");
    scanf("%f %f",&n1,&n2);
    switch (op) {

        case '-':{
            float val = n1-n2;
            printf("%.2f - %.2f = %.2f",n1,n2,val);
            break;
        }  case '+':{
            float val = n1+n2;
            printf("%.2f + %.2f = %.2f",n1,n2,val);
            break;
        }  case '*':{
            float val = n1*n2;
            printf("%.2f * %.2f = %.2f",n1,n2,val);
            break;
        }  case '/':{
            float val = n1/n2;
            printf("%.2f / %.2f = %.2f",n1,n2,val);
            break;
        }

    }
    return 0;
}
