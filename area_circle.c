#include<stdio.h>
int main(){
    float r;
    printf("Enter radious of the circle:");
    scanf("%f",&r);
    float area = 3.14*r*r;
    printf("Area of the Circle is:%f",area);
    return 0;
}