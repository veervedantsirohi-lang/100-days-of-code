//Q) Write a program to find the sum of digits of a number.

#include<stdio.h>

int main() {
    int number, sum = 0, remainder;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    
    while (number != 0) {
        remainder = number % 10;
        sum += remainder;
        number /= 10;
    }

    
    printf("The sum of the digits is %d\n", sum);

    return 0;
}