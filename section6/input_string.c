#include <stdio.h>

int main() {
    char str[100]; // Declare a character array to hold the string
    int a = 10;

    // Input a string from the user
    printf("Enter a string: ");
    scanf("%99[^\n]", str); // Using %s to read a string (up to whitespace)

    // Output the string
    printf("You entered: %s\n", str);
    printf("The value of a is: %d\n", a); // Output the value of a

    return 0;
}