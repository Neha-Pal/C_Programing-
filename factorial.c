#include<stdio.h>
int factorial(int n);
int main(){
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    printf("Factorial is: %d",factorial(n));
}
int factorial(int n){
    if(n==1){
        return 1;
    }
    int fact_1=factorial(n-1);
    int fact=fact_1*n;
}