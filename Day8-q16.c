//Q) Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>

int main() {
    int num1, num2, num3;
    int largest;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);

    
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    printf("The largest number among %d, %d, and %d is %d\n", num1, num2, num3, largest);

    return 0;
}