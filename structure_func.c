#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    int salary;
};
void show(struct Employee e){
    printf("Id is %d and salary is - %d",e.id,e.salary);
}

int main(){
    struct Employee e1;
    printf("For Employee 1 - \n");
    printf("Enter id - ");
    scanf("%d",&e1.id);
    printf("Enter salary - ");
    scanf("%d",&e1.salary);

    show(e1);
}