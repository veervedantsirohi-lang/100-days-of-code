//Q) Write a program to check if a number is a palindrome.

#include<stdio.h>

int main() {
    int number, original_number, reversed_number = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &number);

    original_number = number;

    
    while (number != 0) {
        remainder = number % 10;
        reversed_number = reversed_number * 10 + remainder;
        number /= 10;
    }

    
    if (original_number == reversed_number) {
        printf("%d is a palindrome.\n", original_number);
    } else {
        printf("%d is not a palindrome.\n", original_number);
    }

    return 0;
}