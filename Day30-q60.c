//Q) Count positive, negative, and zero elements in an array.

#include<stdio.h>

int main() {
    int n, i, posCount = 0, negCount = 0, zeroCount = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] > 0) {
            posCount++;
        } else if(arr[i] < 0) {
            negCount++;
        } else {
            zeroCount++;
        }
    }

    printf("The number of positive elements in the array is: %d\n", posCount);
    printf("The number of negative elements in the array is: %d\n", negCount);
    printf("The number of zero elements in the array is: %d\n", zeroCount);

    return 0;
}