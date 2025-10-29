//Print initials of a name with the surname displayed in full.


#include <stdio.h>

int main() {
    char name[1000];
    int i = 0, lastSpaceIndex = -1;

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    
    for(i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ') {
            lastSpaceIndex = i;
        }
    }

    printf("The initials and surname are: ");

    
    if(lastSpaceIndex != -1) {
        
        if(name[0] != ' ' && name[0] != '\n') {
            printf("%c. ", name[0]);
        }

        
        for(i = 0; i < lastSpaceIndex; i++) {
            if(name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\n' && name[i + 1] != '\0') {
                printf("%c. ", name[i + 1]);
            }
        }

        
        for(i = lastSpaceIndex + 1; name[i] != '\0'; i++) {
            printf("%c", name[i]);
        }
    } else {
        
        printf("%s", name);
    }

    return 0;
}