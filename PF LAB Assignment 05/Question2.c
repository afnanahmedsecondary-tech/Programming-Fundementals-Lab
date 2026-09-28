#include <stdio.h>

int main() {

    int age, income, credit_score;
    printf("Enter Age \n"); scanf(" %d", &age);
    printf("Enter Income \n"); scanf(" %d", &income);
    printf("Enter Credit Score \n"); scanf(" %d", &credit_score);

    char loan; printf("Enter Loan"); scanf(" %c", &loan);

    if (age >= 21 && income >= 100000 && credit_score >= 750 && loan == 'N')
        printf("High Approval Chance");
    
    else if (age >= 21 && income >= 75000 && credit_score >= 650 && loan == 'Y')
        printf("Manual Review");

    else if (age >= 21 && income >= 50000 && credit_score >= 600) 
        printf("Possibly Elligble");

    else 
        printf("Rejected: Does Not meet any crieteria");
}