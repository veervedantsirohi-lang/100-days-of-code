//Q) Write a program to print the product of even numbers from 1 to n.

#include<stdio.h>

int main() {
    int n;
    unsigned long long product = 1;
    int has_even = 0; // Flag to check if there are any even numbers

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    
    for(int i = 2; i <= n; i += 2) {
        product *= i;
        has_even = 1; // Set flag to true if at least one even number is found
    }

    
    if (has_even) {
        printf("The product of even numbers from 1 to %d is %llu\n", n, product);
    } else {
        printf("There are no even numbers from 1 to %d\n", n);
    }

    return 0;
}