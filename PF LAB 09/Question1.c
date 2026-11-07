#include <stdio.h>

float calculateDiscount(int customer, int amount) {

    float discounted_amount;

    if (customer == 1) discounted_amount = amount * 0.2;
    if (customer == 2) discounted_amount = amount * 0.1;
    if (customer == 3) discounted_amount = amount * 0.05;

    if (amount > 10000) {
        discounted_amount = amount * (discounted_amount / amount + 0.02);
    }

    return discounted_amount;

}

int calculateFinalBill(int amount) {
    int tax = amount * 0.15;
    int shipping = 0;

    if (amount <= 5000) shipping += 300;
    
    return amount + shipping + tax;
}


int main() {

    int amount; printf("Enter Bill Amount"); scanf("%d", &amount);

    int customer; printf("Choose a valid Customer Type \n");
    printf("1 for Platinium \n 2 for Gold \n 3 for Standard");
    scanf("%d", &customer);

    amount = amount - calculateDiscount(customer, amount);

    amount = calculateFinalBill(amount);
    printf("Final Bill %d", amount);

    return 0;
    

    
}