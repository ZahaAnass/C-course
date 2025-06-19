#include <stdio.h>

int main() {

    // WEIGHT CONVERTER PROGRAM

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Conversion Calculator\n");
    printf("1. Pounds to Kilograms\n");
    printf("2. Kilograms to Pounds\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1){
        // Kilograms to pounds
        printf("Enter the weight in kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("The weight in pounds is: %.2f\n", pounds);
    }else if (choice == 2){
        // Pounds to Kilograms
        printf("Enter the weight in pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("The weight in kilograms is: %.2f\n", kilograms);
    }else{
        printf("Invalid choice! Please enter 1 or 2\n");
    }


    return 0;
}