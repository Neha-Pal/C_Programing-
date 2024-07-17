#include<stdio.h>
struct vector{
    int i,j,k;
};

void show(struct vector v){
    printf("%d.i+%d.j+%d.k",v.i,v.j,v.k);
}

int main(){
    struct vector v;
    printf("Enter 3 scaler value - ");
    scanf("%d %d %d",&v.i,&v.j,&v.k);
    show(v);
    return 0;
}