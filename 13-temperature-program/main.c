#include <stdio.h>

int main() {
    // TEMPERATURE CONVERSION PROGRAM

    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temperature Conversion Calculator\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the temp on Celsius (C) or Fahrenheit (F)?: ");
    scanf("%c", &choice);

    if (choice == 'C'){
        // Celsius to Fahrenheit
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("The temperature in Fahrenheit is: %.1f\n", fahrenheit);
    }else if (choice == 'F'){
        // Fahrenheit to Celsius
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("The temperature in Celsius is: %.1f\n", celsius);
    }else{
        printf("Invalid choice! Please enter C or F\n");
    }

    return 0;
}