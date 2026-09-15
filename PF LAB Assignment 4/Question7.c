#include <stdio.h>

int main() {
    int Data, Price;
    float Discount = 1.0;

    printf("Enter Data");
    scanf("%i", &Data);

    printf("Enter Price");
    scanf("%i", &Price);
    
    int Basic_Cost;
    Basic_Cost = Price * Data;
    
    if (Data >= 200)
        Discount = 0.85;

    else if (Data > 99)
        Discount = 0.9;
    
    else if (Data > 49)
        Discount = 0.95;

    printf("Basic Cost %d \n", Basic_Cost);
    printf("Discounted Amount %.2f\n", Basic_Cost - (Basic_Cost * Discount));
    printf("Final Cost %.2f\n", Basic_Cost * Discount); 


}