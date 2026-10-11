#include <stdio.h> 

int main() {

    int num; printf("Enter a number \n"); scanf("%d", &num);   
    int even = 0; int odd = 0; int get = 0;

    while (num != 0) {
        get = num % 10;
        num = num / 10;

        (get % 2 == 0) ? even++ : odd++;
    }

    printf("Even Count %d \n", even);
    printf("Odd Count %d \n", odd);
}