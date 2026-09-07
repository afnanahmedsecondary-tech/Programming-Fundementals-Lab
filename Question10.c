#include <stdio.h>

int main() {
    char name[50];
    printf("Enter Student Name: ");
    fgets(name, 50, stdin);

    int age;
    printf("Enter your age: ");
    scanf("%i", &age);

    float height;
    printf("Enter height: ");
    scanf("%f", &height);

    char grade;
    printf("Enter Grade: ");
    scanf(" %c", &grade);

    float CGPA;
    printf("Enter CGPA: ");
    scanf("%f", &CGPA);

    printf("=====STUDENT REPORT====\n");
    printf("Name: %s\n", name);
    printf("Age: %i\n", age);
    printf("Height: %.2f\n", height);
    printf("Grade: %c\n", grade);
    printf("CGPA: %.2f\n", CGPA);

}