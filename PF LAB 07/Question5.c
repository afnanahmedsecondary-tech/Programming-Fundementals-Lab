#include <stdio.h>

int main() {
    char sentences[3][100];

    printf("Enter a string \n");

    for (int i = 0; i < 3; i++) {
        scanf("%99[^;\n]", sentences[i]);
        scanf("%*c");
    }

    for (int i = 0; i < 3; i++) {
        int vowel = 0;
        for (int j = 0; sentences[i][j] != '\0'; j++) {
            if (sentences[i][j] == 'a' || sentences[i][j] == 'e' || sentences[i][j] == 'i'
            || sentences[i][j] == 'o' || sentences[i][j] == 'u' || 
             sentences[i][j] == 'A' || sentences[i][j] == 'E' 
            || sentences[i][j] == 'I' || sentences[i][j] == 'O'
            || sentences[i][j] == 'U') {
                vowel++;
            }
        }
        printf("Sentence %d has %d vowels\n", i+1, vowel );
    }   
} 