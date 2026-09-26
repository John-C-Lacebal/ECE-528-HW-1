#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {

    printf("ECE 528/L - John Lacebal - HW1 \n");

    uint32_t user_value = 0;
    printf("Enter a 32-bit integer >= 0: ");

    // Read into a wider signed type first so negative numbers are detectable
    long check_value = 0;

    // Check if integer is valid
    if (scanf("%ld", &check_value) != 1) {
        printf("Error: Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    if (check_value < 0 || check_value > 4294967295) {
        printf("Error: Input out of range for an unsigned 32-bit integer.\n");         
        return 1;
    }

    user_value = (uint32_t)check_value;
    int count = 0;
    uint32_t temp = user_value;

    while (temp != 0) {
        temp &= (temp - 1);
        count++;
    }

    printf("The number %u has %d bit(s) set to 1.\n", user_value, count);
    getchar();
}