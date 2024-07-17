#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    int salary;
};

int main(){
    struct Employee e1;
    printf("For Employee 1 - \n");
    printf("Enter id - ");
    scanf("%d",&e1.id);
    printf("Enter salary - ");
    scanf("%d",&e1.salary);

    struct Employee *ptr;
    ptr = &e1;
    printf("%d %d",ptr->id,ptr->salary);
    return 0;

}
