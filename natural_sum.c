#include<stdio.h>
int sum(int num);
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    printf("Sum is: %d",sum(num));
}
int sum(int num){
    if(num==1){
        return num;
    }
    int sum_1=sum(num-1);
    int sum=sum_1+num;
}