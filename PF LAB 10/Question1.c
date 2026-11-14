#include <stdio.h>
#include <string.h>

int main() {
    char arr[1000];
    char B[] = "bad";
    char G[] = "good";

    printf("Enter a comment: \n");

    if (fgets(arr, sizeof(arr), stdin) != NULL) {
        arr[strcspn(arr, "\n")] = '\0';
    }

    printf("Total length of characters: %d\n", strlen(arr));

    printf("Report: ");
    char *b_ptr = strstr(arr, B);
    char *g_ptr = strstr(arr, G);

    if (b_ptr != NULL) {
        printf("Negative\n");

        char temp[1000];
        size_t len = b_ptr - arr;
        
        strncpy(temp, arr, len);
        temp[len] = '\0';

        strcat(temp, "not good");

        strcat(temp, b_ptr + strlen(B));

        strcpy(arr, temp);

        printf("Updated review (Sanitized): %s\n", arr);
    } 
    else if (g_ptr != NULL) printf("Positive\n");
     
    else  printf("Neutral\n");


    return 0;
}