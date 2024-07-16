#include<stdio.h>
int swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x=5,y=6;
    printf("Before swaping x= %d and y=%d\n",x,y);
    swap(&x,&y);
    printf("After swaping x= %d and y=%d",x,y);
}