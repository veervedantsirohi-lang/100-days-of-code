//Q) Write a program to swap the first and last digit of a number.

#include<stdio.h>

int main() {
    int number, first_digit, last_digit, num_digits, middle_part, swapped_number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    
    last_digit = number % 10;

    
    num_digits = 0;
    int temp = number;
    while (temp != 0) {
        temp /= 10;
        num_digits++;
    }

    
    first_digit = number / (int)pow(10, num_digits - 1);

    
    middle_part = (number % (int)pow(10, num_digits - 1)) / 10;

    
    swapped_number = last_digit * (int)pow(10, num_digits - 1) + middle_part * 10 + first_digit;

    
    printf("The number after swapping the first and last digits is: %d\n", swapped_number);

    return 0;
}