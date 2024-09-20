#include <stdio.h>
typedef struct data{
    char name[60];
    int roll;
    float degree;
}data;
int main() {
data someone;
    printf("Enter information of students: \n");
    printf("Enter name:");
    scanf("%[^\n]s",someone.name);
    fflush(stdin);
    printf("Enter roll:");
    scanf("%d",&someone.roll);
    fflush(stdin);
    printf("Enter marks: ");
    scanf("%f",&someone.degree);
    printf("Displaying Information\n");
    printf("name: %s \n"
           "Roll: %d \n"
           "Marks: %.1f ",someone.name,someone.roll,someone.degree);

    return 0;
}
