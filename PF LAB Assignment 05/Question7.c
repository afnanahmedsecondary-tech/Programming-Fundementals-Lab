#include <stdio.h>

int main() {
    int threshold; printf("Enter Confidence Threshold \n"); scanf(" %d", &threshold);
    int confidence; printf("Enter Model Confidence \n"); scanf(" %d", &confidence);

    if (confidence >= 90) {
        printf("Very High \n");
    }
    else if (confidence >= 75) {
        printf("High \n");
    }

    else if (confidence >= 50) {
        printf("Moderate \n");
    }

    else 
        printf("Low \n");

    (confidence >= threshold && confidence >=50) ? printf("Accepted") : printf("Rejected");
}