#include<stdio.h>
int main(){
    float c;
    printf("Enter temperature in Celcius:");
    scanf("%f",&c);
    float F= ((9.0/5.0)*c)+32;
    printf("Temperature in Farenheit: %f",F);
    return 0;
}