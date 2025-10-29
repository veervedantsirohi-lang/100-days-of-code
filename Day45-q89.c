//Count frequency of a given character in a string.

#include<stdio.h>

int main() {
    char str[1000];
    char target;
    int i = 0, frequency = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to find frequency: ");
    scanf(" %c", &target);

    
    while(str[i] != '\0') {
        if(str[i] == target) {
            frequency++;
        }
        i++;
    }

    printf("The frequency of character '%c' in the string is: %d\n", target, frequency);

    return 0;
}