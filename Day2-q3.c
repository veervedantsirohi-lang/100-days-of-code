//Q) Write a program to calculate the area and perimeter of a rectangle given its length and width.

#include<stdio.h>

int main() {
    float length, width;
    float area, perimeter;


    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);


    area = length * width;
    perimeter = 2 * (length + width);


    printf("The area of the rectangle is %.2f\n", area);
    printf("The perimeter of the rectangle is %.2f\n", perimeter);

    return 0;
}