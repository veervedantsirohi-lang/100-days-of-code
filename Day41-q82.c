//Print each character of a string on a new line.

#include<stdio.h>

int main() {
    char str[1000];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Printing each character on a new line until the null terminator
    while(str[i] != '\0') {
        // Exclude the newline character added by fgets
        if(str[i] != '\n') {
            printf("%c\n", str[i]);
        }
        i++;
    }

    return 0;
}