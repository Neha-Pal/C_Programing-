#include <stdio.h>

int main() {
    int a, b;
    printf("Enter 0 or 1: ");
    scanf("%d", &a);

    printf("Enter 0 or 1: ");
    scanf("%d", &b);

    if ((a == 0 || a == 1) && (b == 0 || b == 1)) {
        printf("Binary numbers\n");
    } else {
        printf("Please enter binary numbers...\n");
    }   

    printf("The value for a AND b is: %d\n", a && b); // Logical AND
    printf("The value for a OR b is: %d\n", a || b);  // Logical OR

    return 0;
}
