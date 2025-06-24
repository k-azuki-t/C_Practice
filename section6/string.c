#include <stdio.h>

int main() {
    char str[100] = "Hello"; // Declare a character array to hold the string

    for (int i = 0; i < sizeof(str); i++) {
        printf("%d ", str[i]); // Print each character in the string
    }
    printf("\n");
    printf("%s\n", str);

    return 0;
}