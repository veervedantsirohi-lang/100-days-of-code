//Find the longest word in a sentence.

#include<stdio.h>

int main() {
    char str[1000];
    int maxLength = 0, currentLength = 0;
    int i = 0, startIndex = -1, maxStartIndex = -1;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    
    while(str[i] != '\0') {
        if(str[i] != ' ' && str[i] != '\n') {
            if(currentLength == 0) {
                startIndex = i; 
            }
            currentLength++;
        } else {
            if(currentLength > maxLength) {
                maxLength = currentLength;
                maxStartIndex = startIndex;
            }
            currentLength = 0; 
        }
        i++;
    }

    
    if(currentLength > maxLength) {
        maxLength = currentLength;
        maxStartIndex = startIndex;
    }

    if(maxStartIndex != -1) {
        printf("The longest word is: ");
        for(i = maxStartIndex; i < maxStartIndex + maxLength; i++) {
            putchar(str[i]);
        }
        printf("\n");
        printf("Length of the longest word: %d\n", maxLength);
    } else {
        printf("No words found in the sentence.\n");
    }

    return 0;
}