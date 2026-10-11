#include <stdio.h>

int main() {
    int num; printf("Enter a number \n"); scanf("%d", &num);

    int reversed;

    while (num != 0) {
        printf("%d", (num % 10));
        num = num / 10;
    }

    printf("\n");
}