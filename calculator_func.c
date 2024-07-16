#include<stdio.h>

int sum(int x,int y){
    printf("Sum is:%d\n",x+y);
    return x+y;
}
int sub(int x,int y){
    printf("Sub is:%d\n",x-y);
    return x-y;
}
int mul(int x,int y){
    printf("Multiplication is:%d\n",x*y);
    return x*y;
}
float div(int x,int y){
    printf("Dividion is:%.2f\n",(float)x/y);
    return (float)x/y;
}
int main(){
    int a,b;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    sum(a,b);
    sub(a,b);
    mul(a,b);
    div(a,b);
    return 0;
}