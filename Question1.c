#include <stdio.h>

int main() {
    char name[50];
    printf("Enter your name: ");
    fgets(name, 50, stdin);

    char city[50];
    printf("Enter your city: ");
    fgets(city, 50, stdin);
    
    int age;
    printf("Enter your age: ");
    scanf("%i", &age);
    
    
    printf("Name: %s\n", name);
    printf("Age: %i\n", age);
    printf("City: %s", city);
    
}
