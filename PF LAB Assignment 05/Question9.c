#include <stdio.h>
#include <math.h>

int main() {

    int choice; printf("Enter a Choice \n");
    printf("1 for Sqrt  \n 2 for Power \n 3 for Absolute \n 4 for Floor \n 5 for Ceil \n");
    scanf(" %d", &choice);

    int num; printf("Enter a Number \n"); scanf(" %d", &num);

    switch (choice) {

        
        case 1:
            
            if (num < 0) {
                printf("Invalid number \n");
            }
            else 
                printf(" %f", sqrt(num));

            break;

        case 2:

            int num2; printf("Number raised to the power of... \n"); scanf(" %d", &num2);
            printf(" %f", pow(num, num2));
            break;

        case 3:
            printf("Absoulte Value %f \n", fabs(num));
            break;
        
        case 4:

            printf("Floor Value %f \n", floor(num));
            break;

        case 5:

            printf("Ceil Value %f \n", ceil(num));
            break;

        default:
        
            printf("Invalid Choice");
            
    }
} 