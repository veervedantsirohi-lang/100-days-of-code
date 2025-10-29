//Reverse a string.

#include<stdio.h>

int main() {
    char str[1000];
    int length = 0, i;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    while(str[length] != '\0') {
        length++;
    }

    
    if(length > 0 && str[length - 1] == '\n') {
        length--;
    }

    
    for(i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("The reversed string is: %s", str);

    return 0;
}