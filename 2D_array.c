#include<stdio.h>
int main(){
    int matrix[2][3]={{2,4,5},{6,7,9}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d \n",matrix[i][j]);
        }
    }
}