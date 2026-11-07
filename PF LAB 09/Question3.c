#include <stdio.h>

int main() {
    int image[3][3];

    int (*ptr)[3] = image;

    for (int i = 0; i < 3; i++) {
        for (int  j = 0; j < 3; j++) {
            
            int value = 0;
            printf("Enter a Number \n");
            scanf("%d", &value);

            *(*(ptr + i) + j) = value * 2;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }


}