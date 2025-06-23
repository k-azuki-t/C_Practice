#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isRaining;

    // Input whether it is raining
    printf("Is it raining? (1 for yes, 0 for no): ");
    scanf("%d", &isRaining); // Using %d to read a boolean value (1 for true, 0 for false)

    if (isRaining) {
        printf("It's raining, take an umbrella!\n");
    } else {
        printf("It's not raining, you can leave your umbrella at home.\n");
    }

    return 0;
}