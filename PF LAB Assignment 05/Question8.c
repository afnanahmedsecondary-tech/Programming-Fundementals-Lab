#include <stdio.h>

int main() {

    int value; printf("Enter a Value \n"); scanf(" %d", &value);

    if (value & 1 != 0 ) {
        printf("Viewing Allowed \n");
    } 
    if (value & 2 != 0) {
        printf("Training Allowed \n");
    }
    if (value & 4 != 0) {
        printf("Testing ALlowed \n");
    }
    if (value & 8 != 0) {
        printf("Deployment Allowed \n");
    }

    if ((value & 2) && (value & 8)) {
        printf("Training and Deployment \n");
    }
    

}