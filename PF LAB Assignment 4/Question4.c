#include <stdio.h>

int main() {
    int accuracy, prediction_latency, status;

    printf("Enter Accuracy");
    scanf("%i", &accuracy);

    printf("Enter Prediciton Latency");
    scanf("%i", &prediction_latency);

    printf("Enter Status");
    scanf("%i", &status);


    if (status != 1) {
        printf("Model Not Approved");
    }
    else if  (prediction_latency > 100) {
        printf("Latency Too High");
    }
    else if (accuracy < 90) {
        printf("Accuracy too Low");
    }
    else 
        printf("Model Approved");
}