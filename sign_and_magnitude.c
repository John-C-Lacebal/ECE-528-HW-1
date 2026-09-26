#include <stdio.h>
#include <stdlib.h>

int main(void) {

    printf("ECE 528/L - John Lacebal - HW1 \n");
    
    int n;

    printf("Enter an integer number: ");
    
    if (scanf("%d", &n) != 1) {
        printf("Error: Invalid input. Please enter a valid integer.\n");
        return 1;
    }
    
    int abs_value = abs(n);

    if (n > 0) {
        printf("%d is positive.\n", n);
    } else if (n < 0) {
        printf("%d is negative.\n", n);
    } else {
        printf("The number is zero.\n");
    }

    printf("The absolute value is: %d\n", abs_value);
}

