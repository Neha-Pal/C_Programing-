#include<stdio.h>
int swap(int a,int b);
int _swap(int *x,int *y);
int main(){
    int a=66;
    int b=77;
    int x=99;
    int y=11;
    swap(a,b);
    printf("a=%d & b=%d \n",a,b);
    _swap(&x,&y);
    printf("x=%d & y=%d",x,y);

}
//call by value
int swap(int a,int b){
    int call_by_value=a;
    a=b;
    b=call_by_value;
}
//call by reference
int _swap(int *x,int *y){
    int call_by_ref=*x;
    *x=*y;
    *y=call_by_ref;
}