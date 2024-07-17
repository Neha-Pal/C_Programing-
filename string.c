#include<stdio.h>
int main(){
    char st[] = {'N','E','H','A','\0'};//If we use single quote then null character is important
    char st_1[] = "Neha";//If we use double quote then the system automatically use a null character
    printf("%c\n",st[0]);

    printf("%s",st_1);
    printf("\n");
    char st_2[4];
    printf("Enter 3 letters - ");
    scanf("%s",st_2);//sting doesn't need any '&' for taking input from the user
    printf("%s",st_2);
    return 0;
}