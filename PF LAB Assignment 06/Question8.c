#include <stdio.h>

int main() {

    int arr[9];

    for(int i = 0; i < 8; i++) {
        printf("Enter a Number \n");
        scanf("%d", &arr[i]);
    }

    printf("\n");
    printf("Complete Array:");
    for (int i = 0; i< 8; i++) printf("%d", arr[i]);
    printf("\n");

    int smallest = arr[0];
    for (int i = 0; i < 8; i++) {
        if (arr[i] < smallest) smallest = arr[i];
    }

    int largest = arr[0];
    for (int i = 0; i< 8; i++) {
        if (arr[i] > largest) largest = arr[i];
    }

    printf("Largest Number: %d \n", largest);
    printf("Smallest Number: %d \n", smallest);



    int num; printf("Enter a number \n"); scanf("%d", &num);
    int index = -1;

    for (int i = 0; i< 8; i++) {
        if (arr[i] == num) {index = i; break;}
    }

    (index == -1) ? printf("Number not found \n") : printf("Found at Index %d \n", index);


    int in_index = -1; print("Enter an Index \n"); scanf("%d", &in_index);
    int num; printf("Enter a number \n"); scanf("%d", &num);
    for (int i = in_index; i < 9; i++) {
        arr[i] = arr[i+1];
    }
    arr[in_index] = num;

    
    
    int del_index = -1; print("Enter an Index \n"); scanf("%d", &del_index);
    arr[del_index] = arr[del_index + 1]';'
    for (int i = del_index + 1; i > -1; i)


}