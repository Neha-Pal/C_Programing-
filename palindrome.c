#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int reversed = 0, remainder, original;
    original = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Check if the original number is equal to its reverse
    return original == reversed;
}

int main() {
    int num;

    // Input a number from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check and display if the number is a palindrome
    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}
