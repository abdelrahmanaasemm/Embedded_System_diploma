#include <stdio.h>

int main() {
    int m = 29;;
    printf("Address of m :0x%x \n"
           "Value of m :%d\n", &m, m);
    int *ab = &m;
    printf("Value of pointer ab : %d\n"
           "Address of pointer ab :0x%x\n\n", *ab, ab);
    m = 34;
    printf("Value of pointer ab : %d\n"
           "Address of pointer ab :0x%x\n\n", *ab, ab);
    *ab = 7;;
    printf("Address of m :0x%x \n"
           "Value of m :%d\n", &m, m);
    return 0;
}
