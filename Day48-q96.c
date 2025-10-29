//Reverse each word in a sentence without changing the word order.

#include<stdio.h>

void reverseWord(char str[], int start, int end) {
    char temp;
    while(start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}