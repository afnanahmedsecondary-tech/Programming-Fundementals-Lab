#include <stdio.h>

int main() {

    int shifts[4][3]; 

    for (int i =0; i < 3; i++) {
        printf("Enter 3 Numbers \n");
        for (int j = 0; j < 3; j++) {
            scanf("%d" , &shifts[i][j]);
        }
    }

    printf("Enter a Row \n");
    int row; scanf("%d", &row);

    for (int i = 3; i > row; i--) {
        for (int j = 0; j < 3; j++ ) {
            shifts[i][j] = shifts[i-1][j];
        }
    }

    printf("Enter New Row Values");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &shifts[row][i]);
    }

        for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++ ) {
            printf("%d ", shifts[i][j]);
        }
        printf("\n");
    }

    
}