#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%i", &age);

    float height;
    printf("Enter Height: ");
    scanf("%f", &height);

    char grade;
    printf("Enter Grade: ");
    scanf(" %c", &grade);

    printf("Age: %i\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c", grade);

}