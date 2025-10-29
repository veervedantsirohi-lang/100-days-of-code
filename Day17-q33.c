//Q) Write a program to check if a number is an Armstrong number.

#include<stdio.h>

int main() {
    int number, original_number, remainder, n = 0;
    float result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    original_number = number;

    
    while (original_number != 0) {
        original_number /= 10;
        ++n;
    }

    original_number = number;

    
    while (original_number != 0) {
        remainder = original_number % 10;
        result += pow(remainder, n);
        original_number /= 10;
    }

    
    if ((int)result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}