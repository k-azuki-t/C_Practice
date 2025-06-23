#include <stdio.h>

int main() {
    int i;
    int result = 1; // Variable to store the factorial result

    // Input a number to calculate its factorial
    printf("Enter a number to calculate its factorial: ");  
    scanf("%d", &i);

    // Initialize result to 1 (factorial of 0 is 1)
    while(i > 0) {
        result *= i; // Multiply result by the current value of i
        i--; // Decrement i by 1
    }

    // Output the factorial result
    printf("Factorial result: %d\n", result);
    
    return 0;
}