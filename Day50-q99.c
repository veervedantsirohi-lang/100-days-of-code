//Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>

int main() {
    char date[11]; 
    int day, year;
    char month[4];

    printf("Enter the date in dd/04/yyyy format: ");
    scanf("%s", date);

    
    scanf(date, "%2d/04/%4d", &day, &year);

    
    printf(month, sizeof(month), "Apr");

    
    printf("The date in dd-Apr-yyyy format is: %02d-%s-%04d\n", day, month, year);

    return 0;
}