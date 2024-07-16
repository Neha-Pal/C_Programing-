#include<stdio.h>
int main(){
    int arr[10];
    int n;
    printf("Enter number - ");
    scanf("%d",&n);
    for(int i = 1;i<=10 ; i++){
        arr[i] = n*i;
    }
    printf("Table is - \n");
    for(int i = 1;i<10 ; i++){
        printf("%d X %d = %d\n",n,i,arr[i]);
    }
    return 0;
}