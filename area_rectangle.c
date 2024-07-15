#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter length of the rectangle:");
    scanf("%d",&a);
    printf("Enter width of the rectangle:");
    scanf("%d",&b);
    int area = a*b;
    printf("Area is:%d",area);
    return 0;
}