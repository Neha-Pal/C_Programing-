#include<stdio.h>
#include<string.h>
typedef struct Employee{
    int id;
    int salary;
}emp;

void show(emp e){
    printf("ID id %d and salary is - %d",e.id,e.salary);
}

int main(){
    emp e1;
    printf("For employee 1-\n");
    printf("Enter id - ");
    scanf("%d",&e1.id);
    printf("Enter salary - ");
    scanf("%d",&e1.salary);
    show(e1);

}