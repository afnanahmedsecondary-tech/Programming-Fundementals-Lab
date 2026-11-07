#include <stdio.h>


void withdraw(float amount, float *balance) {
    if (amount > *balance) printf("Transaction Declined; Insufficent Balance");
    else {*balance -= amount;
            printf("Amount Withdrawn Successfully %.2f", amount);
        };
}

void deposit(float amount, float *balance) {
    *balance += amount;
    printf("Amount Added Successfully %.2f", *balance);
}

int main() {
    float balance = 0;

    int transaction_type = 0; 
    printf("Enter a transcation type \n 1 for Deposit \n 2 for Withdraw \n");
    scanf("%d", &transaction_type);

    float amount; printf("Enter Amount \n");
    scanf("%f", &amount);
    float *b = &balance;

    if (transaction_type == 1) deposit(amount, b);
    else if (transaction_type == 2) withdraw(amount, b);
    else {printf("Invalid"); return -1;}

    printf("Current Balance .%2f\n", balance);

}