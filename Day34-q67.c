//Q) Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int n, i, element, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n + 1];   
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }