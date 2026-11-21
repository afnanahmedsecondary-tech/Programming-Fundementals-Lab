#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n; printf("Enter number of participatns \n");
    scanf("%d", &n); getchar();
    // added because scanf leaves \n in buffer -- for revision

    char  **ptr = malloc(n * sizeof(char *));

    for (int i = 0; i < n; i++) {
        ptr[i] = malloc(100 * sizeof(char));
    }

    char *pattern = malloc(100 * sizeof(char));
    printf("Enter Original Password \n");
    fgets(pattern, 100, stdin);    

    printf("Enter a password \n");
    for (int i = 0; i < n; i++) {
        fgets(ptr[i], 100, stdin);
    }

    
    int index = 0; float score = 0.0;
    for (int i = 0; i < n; i++) {

        int matches = 0; 

        for (int j = 0; j < strlen(pattern); j++) {

            if (pattern[j] >= 'A' && pattern[j] <= 'Z' && 
            ptr[i][j] >= 'A' && ptr[i][j] <= 'Z') matches++;

            if (pattern[j] >= '0' && pattern[j] <= '9' && 
            ptr[i][j] >= '0' && ptr[i][j] <= '9') matches++;

            if (pattern[j] >= 'a' && pattern[j] <= 'z' && 
            ptr[i][j] >= 'a' && ptr[i][j] <= 'z') matches++;
            
            if (!(pattern[j] >= 'A' && pattern[j] <= 'Z') &&
                !(pattern[j] >= 'a' && pattern[j] <= 'z') &&
                !(pattern[j] >= '0' && pattern[j] <= '9') &&
                !(ptr[i][j] >= 'A' && ptr[i][j] <= 'Z') &&
                !(ptr[i][j] >= 'a' && ptr[i][j] <= 'z') &&
                !(ptr[i][j] >= '0' && ptr[i][j] <= '9'))
            matches++;
        
            } 
        printf("String %s has a score of %.2f", ptr[i], ((float)matches/strlen(pattern)) * 100);

        if (score < (float)matches/strlen(pattern)) {
            score = (float)matches/strlen(pattern);
            index = i;
        }
    }

    printf("String %s has the highest score %.2f \n", ptr[index], score * 100);

    for (int i = 0; i < n; i++) free(ptr[i]);

    free(ptr); ptr = NULL;
    free(pattern); pattern = NULL;

    return 0;

}