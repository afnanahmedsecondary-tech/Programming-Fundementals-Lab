#include <stdio.h>

int main() {

    int absent =0; int present = 0;
    
    for (int i = 0; i < 3; i++ ) {
        int num; printf("Enter 0 or 1 \n"); scanf("%d", &num);


            while (num != 0 && num != 1) {
                printf("Invalid Number Try Again \n");
                scanf("%d", &num);
            }
        


        (num == 1) ? present++ : absent++;
    }

    printf("Number of Studens Presnet: %d \n", present);
    printf("Number of Studens Absent: %d \n", absent);
    
}