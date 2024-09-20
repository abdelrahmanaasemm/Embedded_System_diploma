#include <stdio.h>
typedef struct data{
    char name[60];
    int roll;
    float degree;
}data;
int main() {
data someone[10];
    printf("Enter information of students: \n");
    for (int i = 0; i <10 ; ++i) {
        someone[i].roll=i+1;
        printf("For roll number %d \n",i+1);
        printf("Enter name:");
        scanf("%[^\n]s",someone[i].name);
        fflush(stdin);
        printf("Enter marks: ");
        scanf("%f",&someone[i].degree);
        fflush(stdin);

    }
    printf("Displaying Information\n");
    for (int i = 0; i <10 ; ++i) {
        printf("Information for roll number %d: \n"
               "name: %s \n"
               "Marks: %.1f \n",someone[i].roll,someone[i].name,someone[i].degree);
    }


    return 0;
}
