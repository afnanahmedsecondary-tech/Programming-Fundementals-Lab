#include <stdio.h>

int compute(int a, int b, int (*operation)(int, int)) {
    return operation(a , b);
}

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int findMax(int a, int b) {
    if (a > b) return a;
    else return b;
}


int main() {
    int a; int b;
    printf("Enter 2 numbers \n");
    scanf("%d", &a); scanf("%d", &b);
    
    printf("Sum: %d \n", compute(a, b, add));
    printf("Multiply: %d \n",compute(a, b, multiply));
    printf("Max Number: %d \n", compute(a, b, findMax));


    return 0;

}