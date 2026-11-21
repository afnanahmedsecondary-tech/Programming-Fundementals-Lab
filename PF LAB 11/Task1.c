#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; printf("Enter Number of Book Categories \n"); scanf("%d", &n);
    int *ptr = (int *) malloc(n * sizeof(int));

    int total = 0; int lowest = 0;

    printf("Enter Stock Category for %d categories \n", n);
    for (int i =0; i < n; i++) {
        scanf("%d", &ptr[i]);
        total+= ptr[i];

        if (ptr[i] < ptr[lowest]) lowest = i;
    }

    printf("Total Stock %d \n", total );
    printf("Average Stock Price %.2f \n", (float)total/(float)n);
    printf("Category Index with Lowest Stock %d \n", lowest);


    int index, newStock;;

    printf("Enter Category Index to Update \n");
    scanf("%d", &index);

    if (index >= 0 && index < n ) {
        printf("Enter New Stock Quantity \n"); scanf("%d", &newStock);

        ptr[index] = newStock;

        printf("Stock updated \n");

    }
    
    else printf("Invalid Category \n");

    free(ptr); ptr = NULL;

    return 0;


}