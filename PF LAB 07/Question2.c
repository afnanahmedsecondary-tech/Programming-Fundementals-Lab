#include <stdio.h>

int main() {
    char logs[3][30];
    int count = 0;
    
    for (int i = 0; i < 3; i++) {
        printf("Enter a CSV LOG Entry \n");
        scanf(" %29[^,],%29[^,],%29[^,\n]", logs[0], logs[1], logs[2]);

    
    
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 30 && logs[i][j] != '\0'; j++) {
                if (logs[i][j] >= 'A' && logs[i][j] <= 'Z') count++;
            }
        }
    }

    printf("Final Upper Case Letter Count: %d", count);
}
