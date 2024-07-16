#include<stdio.h>
int Printarray(int arr[],int n){
    for(int i = 0;i < n;i++){
        printf("%d \t",arr[i]);
    }
    printf("\n");
}
int reverse(int arr[],int n){
    for(int i = 0 ; i<n/2 ; i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp; 
    }

}
int main(){
    int n;
    
    printf("Enter size of array - ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements - \n");
    for(int i =0 ; i<n ; i++){
        scanf("%d  ",&arr[i]);
    }
    printf("Actual Array -");
    Printarray(arr,n);

    reverse(arr,n);
    printf("reversed Array -");
    Printarray(arr,n);
}