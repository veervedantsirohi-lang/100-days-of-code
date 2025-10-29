//Q) Write a program to find the 1’s complement of a binary number and print it.

#include<stdio.h>

int main() {
    long long binary, temp;
    int remainder, ones_complement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    temp = binary;

    
    while (temp != 0) {
        remainder = temp % 10;
        if (remainder == 0) {
            ones_complement += 1 * place;
        }
        place *= 10;
        temp /= 10;
    }

    
    printf("The 1's complement of %lld is %d\n", binary, ones_complement);

    return 0;
}