#include <stdio.h>
#include <string.h>

void swap();

int main() {
    int a = 10;
    int b = 20;

    printf("Before swap: a = %d, b = %d\n", a, b);
    
    // Call the swap function
    swap(&a, &b);

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int *x, int *y) {
    int temp;

    temp = *x;  // Store the value pointed to by x in temp
    *x = *y;    // Assign the value pointed to by y to the location
    *y = temp;  // Assign the value in temp to the location pointed to by y
}