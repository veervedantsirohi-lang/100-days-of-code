//Q) Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>

int main() {
    float a, b, c, D;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation because a = 0.\n");
        return 0;
    }

    D = (b * b) - (4 * a * c);

    if (D > 0) {
        printf("The equation has Real and Distinct roots.\n");
    }
    else if (D == 0) {
        printf("The equation has Real and Equal roots.\n");
    }
    else {
        printf("The equation has Complex roots.\n");
    }

    return 0;
}
