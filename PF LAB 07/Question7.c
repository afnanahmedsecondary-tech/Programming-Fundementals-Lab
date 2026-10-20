#include <stdio.h>

int main() {

    float senior_data[3][4];

    for (int i = 0; i < 3; i++) {
        printf("Enter Data for Day %d \n", i+1);
        for (int j = 0; j < 4; j++) {
            scanf("%f", &senior_data[i][j]);
        }
    }

    printf("Enter a number from 0 to 3 \n");
    int num; scanf("%d", &num);

    for (int r = 0; r < 3; r++) {
        for (int c = num; c < 3; c++) {
            senior_data[r][c] = senior_data[r][c+1];
        }
    } 

    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            printf(" %.2f", senior_data[r][c]);
        }
        printf("\n");
    } 


}