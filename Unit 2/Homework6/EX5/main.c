#include <stdio.h>
typedef struct data{
    char name[40];
    int ID;
}data;
int main() {
    data x={"asem",1002};
    data y={"asooom",1033};
    data z={"abdooo",1044};

    data *arr[3]={&x,&y,&z};
    data **pointer=arr;
    printf("%s %d\n%s %d\n%s %d\n",
           pointer[0]->name,pointer[0]->ID,
           pointer[1]->name,pointer[1]->ID
           ,pointer[2]->name,pointer[2]->ID);
    return 0;
}
