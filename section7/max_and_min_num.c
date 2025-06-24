#include <stdio.h>

int max, min;

void max_and_min_num(int a, int b, int c);

int main() {
    int a, b, c;

    // Input three integers
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Call the function to find max and min
    max_and_min_num(a, b, c);

    // Output the results
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}

void max_and_min_num(int a, int b, int c) {

    // Find the maximum number
    if (a > b && a > c) {
        max = a;
    } else if (b > a && b > c) {
        max = b;
    } else {
        max = c;
    }

    // Find the minimum number
    if (a < b && a < c) {
        min = a;
    } else if (b < a && b < c) {
        min = b;
    } else {
        min = c;
    }

}