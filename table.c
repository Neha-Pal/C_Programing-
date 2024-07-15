#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The table of %d is--\n",n);

    for(int i = 1;i<=10 ;i++){
        printf("%d X %d = %d \n",n,i,n*i);
    }
    return 0;
}