#include <stdio.h>

int main() {
    int pin; printf("Enter Pin \n"); scanf("%d", &pin);

    int sum = 0;

    while (pin != 0) {
        sum += pin % 10;
        pin = pin / 10;
    }

    (sum = 10) ? printf("Strong Pin") : printf("Weak Pin");

}