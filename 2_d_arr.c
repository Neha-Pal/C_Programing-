#include<stdio.h>

int main(){
    int m,n;
    
    printf("Enter number of rows in the array - ");
    scanf("%d",&m);
    printf("Enter number of columns in the array - ");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter elements - \n");
    for(int i = 0;i<m ;i++){
        for(int j = 0;j<n;j++){
            
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0;i<m ;i++){
        for(int j = 0;j<n;j++){
            printf("The value for [%d][%d] is %d\n",i,j,arr[i][j]);
        }
    }
    printf("Array is - \n");
    for(int i = 0;i<m ;i++){
        for(int j = 0;j<n;j++){
            printf("%d \t ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}