#include<stdio.h>
int main(){
    float p,t,r;
    printf("Enter principle:");
    scanf("%f",&p);
    printf("Enter rate of interest:");
    scanf("%f",&r);
    printf("Enter time:");
    scanf("%f",&t);
    float simple_interest = (p*t*r)/100;
    printf("Simple interest is:%f",simple_interest);
    return 0;
}