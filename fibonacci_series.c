#include<stdio.h>
int fibonacii(int n){
    if(n<=1){
        return n;
    }
    return fibonacii(n-1)+fibonacii(n-2);
}
int main(){
    int n = 4;
    for(int i=0;i<n;i++){
        printf("%d, ",fibonacii(i));
    }
    return 0;
}