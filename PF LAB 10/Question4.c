#include <stdio.h>
int main(void) {


    char Customer_Name[50]; int Account_Number; float Withdrawal_Amount;


    printf("input customer name: \n"); scanf("%49[^\n]",Customer_Name);

    printf("input account number: \n"); scanf("%d",&Account_Number);

    printf("input withdrawl amount: \n"); scanf("%f",&Withdrawal_Amount);


    FILE *fptr;
    fptr = fopen("bank_log.txt", "a"); // same file as mentioned
    
    if (fptr == NULL){
        printf("Error");
        return 1;
    }


    fprintf(fptr,"%s\n%d\n%.2f",Customer_Name,Account_Number,Withdrawal_Amount);

    fclose(fptr);
    
    printf("info succesfully added and file closed");
}