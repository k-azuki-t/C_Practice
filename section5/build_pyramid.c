#include <stdio.h>

int main() {
    int steps;

    // Input the number of steps for the pyramid
    printf("Enter the number of steps for the pyramid: ");
    scanf("%d", &steps);

    // Loop to build the pyramid
    for (int i = 1; i <= steps; i++) {
        // Print leading spaces
        for (int j = 0; j < steps - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 0; k < (2 * i - 1); k++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    // Output the pyramid
    printf("Pyramid built with %d steps.\n", steps);
    
    return 0;
}