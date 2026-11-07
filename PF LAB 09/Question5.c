#include <stdio.h>

void printSensorData(void *ptr, char character) {
    
    if (character == 'f') printf("%.2f", *(float *)ptr); 
    else if (character == 'i') (*(int *)ptr == 1) ? printf("Motion Detected") : printf("No Motion");
    else if (character == 'c') (*(char *)ptr == 'C') ? printf("Door Closed") : printf("Door Open");

}


int main() {

    float temp = 0.0; int motionStatus = 0; char doorLock = 'C';
    float *t = &temp; int *m = &motionStatus; char *d = &doorLock;

    printSensorData(t, 'f');
    printSensorData(m, 'i');
    printSensorData(d, 'c');
    return 0;

    
}