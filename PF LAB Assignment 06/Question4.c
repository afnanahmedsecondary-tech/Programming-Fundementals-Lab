#include <stdio.h>

int main() {

    int num; printf("Enter a number \n"); scanf("%d", &num);

    int initial_num = 0; int final_num = 0;
    int len = 1; int div = 10;
    int dup = num;


    while (dup >= 10) {
        dup = dup / 10;
        len = len * 10;
    }

    while (len >= 10) {

        initial_num = num / len;
        final_num = num % div;

        if (initial_num != final_num) {
            break;
        }

        num = num % len;
        num = num / 10;
        len = len / 100;
        div = 10;
    }

    (initial_num == final_num) ? printf("Palindrome \n") : printf("Not Palindrome \n");

    return 0;
}