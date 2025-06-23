#include <stdio.h>

int main() {

    float weight, height, bmi;

    // Input weight in kilograms
    printf("Enter your weight in kg:");
    scanf("%f", &weight); // & is used to get the address (pointer) of the variable

    // Input height in meters
    printf("Enter your height in meters:");
    scanf("%f", &height);

    // Calculate BMI
    bmi = weight / (height * height);

    // Output the result
    printf("Your BMI is: %.2f\n", bmi);

    return 0;

}