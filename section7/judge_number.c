#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is even
bool is_even(int number) {
    return number % 2 == 0;
}

int main() {
    int number;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);
    // Check if the number is even
    if (is_even(number)) {
        printf("The number %d is even.\n", number);
    } else {
        printf("The number %d is odd.\n", number);
    }
    
    return 0;
}

