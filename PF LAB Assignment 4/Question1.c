#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter first number");
    scanf("%i", &num1);

    printf("Enter second number");
    scanf("%i", &num2);

    printf("Enter Third Number");
    scanf("%i", &num3);

    if (num1  > num2 && num1 > num3) 
        printf("%i is the greatest number", num1);
    
    else if (num2 > num1 && num2 > num3) 
        printf("%i is the greatest number", num2);
    
    else if (num3 > num1 && num3 > num2) 
        printf("%i is the greatest number", num3);

    else if (num1 == num2 && num2 == num3)
        printf("%i %i %i All numbers are equal", num1, num2, num3);
    
    else if (num1 == num2 && num2 > num3)
        printf("%i %i 2 Numbers are Equal", num1, num2);

    else if (num2 == num3 && num2 > num1)
        printf("%i %i 2 Numbers are Equal", num2, num3);
    
    else if (num1 == num3 && num3 > num2)
        printf("%i %i 2 Numbers are Equal", num1, num3);
}