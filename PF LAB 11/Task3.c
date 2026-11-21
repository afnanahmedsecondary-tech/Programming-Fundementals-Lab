#include <stdio.h>
#include <stdlib.h>

int containsDigit(char *s) {

    while (*s  != '\0') {
        if (*s >= '0' && *s <= '9') return 1;
        s++;
    }

    return 0;

}


int main() {
    
    int n; printf("Enter number of Usernames \n"); scanf("%d", &n);
    
    char **ptr = malloc(n * sizeof(char *));

    if (ptr == NULL) {
        printf("Invalid Memory Address");
        return 0;
    }


    for (int i = 0; i<n; i++) {

        ptr[i] = malloc(50 * sizeof(char));

        fgets(ptr[i], 50, stdin);
    }


    for (int i = 0; i < n; i++) {

        int result = containsDigit(ptr[i]);

        if (result == 0) {
            printf("%s \n", ptr[i]);
        }
    
    }

    

    for (int i = 0; i < n; i++) {
        free(ptr[i]);
    }

    free(ptr); ptr = NULL;
    return 0;

}