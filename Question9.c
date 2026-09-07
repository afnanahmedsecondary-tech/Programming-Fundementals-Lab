#include <stdio.h>

int main() {
    char product[50];
    printf("Enter Product Name: \t");
    fgets(product, 50, stdin);

    int quantitiy;
    printf("Enter Quantity: \t");
    scanf("%i", &quantitiy);


    float price;
    printf("Enter Price: \t");
    scanf("%f", &price);

    printf("Prodcut Name: %s\t\n", product);
    printf("Quanitity: %i\t\n", quantitiy);
    printf("Price: %.2f\t\n", price);
}