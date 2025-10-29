//Q) Write a program to take a number as input and print its equivalent binary representation.


#include<stdio.h>

int main() {
    int number;
    int binary[32];
    int index = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    
    if (number == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    
    while (number > 0) {
        binary[index] = number % 2;
        number = number / 2;
        index++;
    }

    
    printf("Binary representation: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}