#include<stdio.h>
//Function Prototype
int sum(int,int);

// function defination
int sum(int x, int y){
    printf("Sum is:%d\n",x+y);
    return x+y;
}
int main(){

    sum(3,5);
    sum(50,54);
}