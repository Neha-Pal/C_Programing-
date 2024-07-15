#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is not prime.\n", n);
    } else {
        int not_prime = 0;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                not_prime = 1;
                break;
            }
        }
        if (not_prime) {
            printf("%d is not prime.\n", n);
        } else {
            printf("%d is prime.\n", n);
        }
    }
    return 0;
}
