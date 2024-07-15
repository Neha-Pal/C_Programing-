#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    printf("Enter 3rd number:");
    scanf("%d",&c);
    printf("Enter 4th number:");
    scanf("%d",&d);

    if(a>b && a>c && a>d){
        printf("Greatest number is:%d",a);
    }
    else if(b>a && b>c && b>d){
        printf("Greatest number is:%d",b);
    }
    else if(c>b && c>a && c>d){
        printf("Greatest number is:%d",c);
    }
    else if(d>b && d>a && d>c){
        printf("Greatest number is:%d",d);
    }
    return 0;
}