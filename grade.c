#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);

    if(marks>=90){
        printf("Grade A");
    }
    if(marks<90 && marks>=80){
        printf("Grade B");
    }
    if(marks<80 && marks>=70){
        printf("Grade C");
    }
    if(marks<70 && marks>=60){
        printf("Grade D");
    }
    if(marks<60){
        printf("Fail");
    }
}