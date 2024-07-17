//make a structure for 3 employee with user imput
#include<stdio.h>
#include<string.h>
struct Employee{
    char name[100];
    int age;
    int salary;
};
int main(){
    struct Employee e1,e2,e3;
    printf("For Employee 1 - \n");
    printf("Enter name - ");
    scanf("%s",e1.name);
    printf("Enter age - ");
    scanf("%d",&e1.age);
    printf("Enter salary - ");
    scanf("%d",&e1.salary);

    printf("For Employee 2 - \n");
    printf("Enter name - ");
    scanf("%s",e2.name);
    printf("Enter age - ");
    scanf("%d",&e2.age);
    printf("Enter salary - ");
    scanf("%d",&e2.salary);

    printf("For Employee 3 - \n");
    printf("Enter name - ");
    scanf("%s",e3.name);
    printf("Enter age - ");
    scanf("%d",&e3.age);
    printf("Enter salary - ");
    scanf("%d",&e3.salary);

    printf("Employee_1:\n %s (%d) - %d \n",e1.name,e1.age,e1.salary);
    printf("Employee_2:\n %s (%d) - %d \n",e2.name,e2.age,e2.salary);
    printf("Employee_3:\n %s (%d) - %d \n",e3.name,e3.age,e3.salary);
}