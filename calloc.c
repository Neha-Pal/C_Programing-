#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter size - ");
    scanf("%d",&n);
    int* ptr;
    ptr = (int*)calloc(n, sizeof(int));

    printf("Enter elements--\n");
    for(int i = 0;i<n ; i++){
        scanf("%d",&ptr[i]);
    }
    printf("Entered elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    free(ptr);
    return 0;
}