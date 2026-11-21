#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; printf("Enter Number of Categories \n");
    scanf("%d", &n);

    int *ptr = malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Invalid");
        return 1;
    }

    
    printf("Enter Rating of each category \n");
    for (int i = 0; i< n; i++) {
        scanf("%d", &ptr[i]);
    }


    int total = 0; int highest = 0; int index = 0;
    
    for (int i = 0; i < n; i++) {
        
        total += ptr[i];
    
        if (highest < ptr[i]) {
            index = i; highest = ptr[i];
        }
    
    }


    printf("Average %.2f", (float)total / (float)n);
    printf("Total Across all categories %d \n", total);
    printf("Category With Highest Rating %d", index);


    printf("Enter a Category to Update");
    int new; scanf("%d", &new);

    if (new >= n || new < 0) {
        printf("Invalid");
        free(ptr); ptr = NULL;
        return 1;
    }
    
    else {
        printf("Enter New Value \n");
        scanf("%d", &ptr[new]);

        printf("All Updated Values \n");
        
        for (int i = 0; i < n; i++) {
            printf("%d", ptr[i]);


        }

        total = 0; highest = 0; index = 0;
    
        for (int i = 0; i < n; i++) {
        
            total += ptr[i];
    
            if (highest < ptr[i]) {
                index = i; highest = ptr[i];
            }
    
        }

        printf("Average %.2f", (float)total / (float)n);
        printf("Total Across all categories %d \n", total);
        printf("Category With Highest Rating %d", index);

        }

    free(ptr); ptr = NULL;

    return 0;
    

}