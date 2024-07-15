#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int sum = 0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    printf("Sum of numbers up to %d is -> %d",n,sum);
}