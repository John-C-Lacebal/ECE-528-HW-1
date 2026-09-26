#include <stdio.h>

int main(void) {

    printf("ECE 528/L - John Lacebal - HW1 \n");

    int n = 0;

    printf("Enter an integer (>= 2): ");

    // Check if integer is valid

    if (scanf("%d", &n) != 1) {
        printf("Error: Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    if (n < 2) {
        printf("Error: Input must be greater than or equal to 2.\n");
        return 1;
    }

    int fib0 = 0;
    int fib1 = 1;
    int fibN = 0;

    printf("Fibonacci sequence up to %d terms: \n", n, fibN);

    for (int i = 0; i <= n; i++) {
        if (i <= 1) {
            printf("%d ", i);
        } else {
            fibN = fib0 + fib1;
            fib0 = fib1;
            fib1 = fibN;
            printf("%d ", fibN);
        }
    }

    printf (" \n");
}