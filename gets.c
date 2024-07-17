#include<stdio.h>
#include<string.h>
int main(){
    char st_3[30];
    gets(st_3);//gets is used to receive multi-word string.
    printf("%s\n",st_3);
    printf("%d",strlen(st_3));
    return 0;
}