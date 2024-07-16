#include<stdio.h>
float sum(float* a, float* b){
    float sum = *a + *b;
    return sum;
}

float avg(float* a, float* b){
    float avg = (*a + *b)/2;
    return avg;
}

int main(){
    float a,b;
    printf("Enter 1st number:");
    scanf("%f",&a);
    printf("Enter 2nd number:");
    scanf("%f",&b);
   // sum(&a,&b);
   // avg(&a,&b);
    printf("Sum is = %.2f\n",sum(&a,&b));
    printf("avarage is = %.2f",avg(&a,&b));
}