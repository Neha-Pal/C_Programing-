#include<stdio.h>
int main(){
    int num=21; //Variable Declaration
    int* ptr=&num;//Pointer Declaration
    printf("%d \n",num);
    printf("%p \n",ptr);//Reference:output of the address of the number
    printf("%d \n",*ptr);//Dereference:output the value of num with the pointer(21)
}