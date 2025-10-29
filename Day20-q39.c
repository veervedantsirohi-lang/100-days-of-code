//Q) Write a program to find the product of odd digits of a number

#include<stdio.h>

int main() {
    int number, remainder;
    long long product = 1;
    int has_odd_digit = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    
    while (number != 0) {
        remainder = number % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
            has_odd_digit = 1;
        }
        number /= 10;
    }

    
    if (has_odd_digit) {
        printf("The product of odd digits is %lld\n", product);
    } else {
        printf("No odd digits found in the number.\n");
    }

    return 0;
}
