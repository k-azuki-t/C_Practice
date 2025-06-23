#include <stdio.h>

int main() {
    int a, b;

    // Input a integers
    printf("Enter a number (1-3): ");
    scanf("%d", &a);

    switch(a) {
        case 1:
        b = 1;
        break;

        case 2:
        b = 2;
        break;

        case 3:
        b = 3;
        break;

        default:
        b = 0; // Default case if a is not 1, 2,
    }

    // Output the result
    printf("You entered: %d\n", b); 

    return 0;
}