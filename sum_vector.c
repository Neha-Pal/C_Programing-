#include<stdio.h>
struct vector{
    int i,j;
};
void show(struct vector v){
    printf("Vector - \n %d.i + %d.j\n",v.i,v.j);
};
struct vector sum_vector(struct vector v1,struct vector v2){
    struct vector v3;
    v3.i = v1.i +v2.i;
    v3.j = v1.j+v2.j;
    return v3;
}
int main(){
    struct vector v1,v2,v3;
    printf("Enter scaler value for vector 1- \n");
    scanf("%d %d",&v1.i,&v1.j);
    show(v1);
    printf("Enter scaler value for vector 2- \n");
    scanf("%d %d",&v2.i,&v2.j);
    show(v2);
    printf("Sum ");
    v3 = sum_vector(v1,v2);
    show(v3);
    return 0;
}