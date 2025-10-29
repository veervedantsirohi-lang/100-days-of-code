//Q) Write a program to check if a number is prime.

#include<stdio.h>

int main() {
    int number, i, is_prime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    
    if (number <= 1) {
        is_prime = 0; 
    } else {
        for(i = 2; i <= number / 2; i++) {
            if(number % i == 0) {
                is_prime = 0; 
                break;
            }
        }
    }

    
    if(is_prime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}