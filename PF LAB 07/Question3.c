#include <stdio.h>

int main() {
    char secret_messages[3][100];
    
    printf("Enter 3 Secret Lines \n");
    for (int i = 0; i < 3; i++) {
        scanf(" %99[A-Z ]", secret_messages[i]);
        scanf("%*[^\n]");
    }

    for (int i = 0; i< 3; i++) {
        int spaces = 0; int words = 0;
        for (int j = 0; secret_messages[i][j] != '\0'; j++) {
            if (secret_messages[i][j] == ' ') spaces++;
            else if (j == 0 || secret_messages[i][j-1] == ' ') words++;
            
        }
        
        printf("Message : %s\n", secret_messages[i]);
        printf("Word Count: %d \n Spaces: %d", words, spaces);
        printf(" \n");
    }

}