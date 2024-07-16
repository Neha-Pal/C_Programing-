#include<stdio.h>
int fibonacci(int n){
    if(n==1 || n==2){
        return n-1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    printf("Fibonacci series at %d is - %d",number,fibonacci(number));
    return 0;
}