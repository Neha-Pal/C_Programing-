#include<stdio.h>

void printFibonacciSeries(int n);

int main() {
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    printf("Fibonacci series up to %d:\n", n);
    printFibonacciSeries(n);
    return 0;
}

void printFibonacciSeries(int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}
