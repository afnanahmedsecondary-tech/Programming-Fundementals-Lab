#include <stdio.h>
#include <stdlib.h>


int main() {
    int n; printf("Enter Number of Feedbacks \n");
    scanf("%d", &n); getchar();
    
    char **ptr = malloc(n * sizeof(char *));

    if (ptr == NULL) {
        printf("Invlaid"); free(ptr);
        return 1;
    }

    printf("enter Feedback \n");
    for (int i = 0; i < n; i++) {
        ptr[i] = malloc(100 * sizeof(char));
        fgets(ptr[i], 100, stdin);
    }


    printf("Want to add more Feedback 1 for Yes 2 For no\n");
    int ans; scanf("%d", &ans); int d = 0;

    if (ans == 1) {
        printf("How many more feedbacks \n");
        scanf("%d", &d); getchar();

        ptr = realloc(ptr, (n + d) * sizeof(char *));

        printf("enter more Feedbacks \n");
        for (int i = n; i < n+ d; i++) {
        ptr[i] = malloc(100 * sizeof(char));
        fgets(ptr[i], 100, stdin);
        }
    }


    int total = 0; int index = 0; 
    int highest = 0;
    for (int i = 0; i < n + d; i++) {

        char *p = ptr[i];
        int count = 0;

        while (*p != '\0' ) {
            count++; total++; p++;
        }

        printf("%s \n", ptr[i]);

        if (count > highest) {
            highest = count; index = i;
        }
    }

    printf("%s has the highest count %d", ptr[index], highest);


    for (int i = 0; i < n + d; i++) free(ptr[i]);

    free(ptr); ptr = NULL;
    return 0;

    

}