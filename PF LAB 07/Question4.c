#include <stdio.h>
#include <string.h>

int main() {
    char word_grid[3][100];

    printf("Enter 3 words");
    for (int i = 0; i < 3; i++) {
        scanf("%[^\n]", word_grid[i]);
        scanf("%*c");
    }

    int row = 0; int column = 0; int len = 0;
    int start = 0;   

    for (int r = 0; r < 3; r++) {
        int j = 0;                       
        int n = strlen(word_grid[r]);


        for (int c = 0; c < 3; c++) {  
            
            while (j < n && word_grid[r][j] == ' ') j++;
            int s = j;                                     
            while (j < n && word_grid[r][j] != ' ') j++;   
            int wlen = j - s;                             

            if (len < wlen) {
                row = r; column = c;
                len = wlen;
                start = s;
            }
        }
    }

    printf("Word with greatest Length ");
    for (int k = start; k < start + len; k++) printf("%c", word_grid[row][k]);  
    printf("\n");
    printf("Row Number %d\n", row);
    printf("Column Number %d\n", column);
}