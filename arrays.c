#include<stdio.h>
int main(){
    int n;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter marks:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Marks are -");
    for(int i=0;i<n;i++){
        printf(" %d \t",arr[i]);
    }
    return 0;
}