#include<stdio.h>
#include<stdlib.h>
int main(){
    int n = 5;
    int* ptr;
    ptr = (int*)malloc(n * sizeof(int));

    printf("Enter 5 elements--\n");
    for(int i = 0;i<5 ; i++){
        scanf("%d",&ptr[i]);
    }
    printf("Entered elements are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    free(ptr);
    return 0;
}