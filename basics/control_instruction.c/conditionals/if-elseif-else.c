#include <stdio.h>

// Function Declaration
void checkEvenOdd(int number);

int main(void) {
    int number;

    printf("Enter a number: ");
    
    // Input Validation
    if (scanf("%d", &number) != 1) {
        printf("Invalid input! Please enter an integer.\n");
        return 1; // Exit with error code
    } // != 1 means if input is not 1 

    checkEvenOdd(number);
    return 0; // 0 means ok going smoothly with no problem
}

// Function Definition
void checkEvenOdd(int number) {
    if (number % 2 == 0) {
        printf("%d is an Even number.\n", number);
    } else {
        printf("%d is an Odd number.\n", number);
    }
}
