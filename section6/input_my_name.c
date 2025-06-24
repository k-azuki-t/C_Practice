#include <stdio.h>

int main() {
    char name[256];

    // Input the user's name
    printf("Enter your name: ");
    scanf("%255[^\n]", name); // Using %s to read a string (up to whitespace)

    // Output the user's name
    printf("Your name is: %s\n", name);

    return 0;
}