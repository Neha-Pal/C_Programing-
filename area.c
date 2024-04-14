#include<stdio.h>
#include<math.h>
int areaSquare(int side);
int areaCircle(int rad);
int areaRectangle(int a,int b);

int main(){
    int side;
    printf("Enter side of the square:");
    scanf("%d",&side);
    int rad;
    printf("Enter radious of the circle:");
    scanf("%d",&rad);
    int a,b;
    printf("Enter length of the rectangle:");
    scanf("%d",&a);
    printf("Enter width of the rectangle:");
    scanf("%d",&b);
    printf("Area of the square is: %d \n",areaSquare(side));
    printf("Area of the circle is: %d \n",areaCircle(rad));
    printf("Area of the rectangle is: %d \n",areaRectangle(a,b));
    return 0;
}

int areaSquare(int side){
    return side*side;
}
int areaCircle(int rad){
    return 3.14*rad*rad;
}
int areaRectangle(int a,int b){
    return a*b;
}