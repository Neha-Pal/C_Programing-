#include<stdio.h>
int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>=18){
        printf("Your age is %d,So you can vote",age);
    }else{
        printf("Your age is %d , you can not vote",age);
    }
    return 0;
}