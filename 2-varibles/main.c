#include <stdio.h>
#include <stdbool.h>

int main() {

    // varible = A reusable container for data
    //           Behaves as if it were the value it contains.

    // int = whole number (4 bytes in modern systems)
    // float = decimal number (4 bytes in modern systems)
    // double = decimal number (8 bytes in modern systems)
    // char = single character (1 byte in modern systems)
    // char[] = array of caractere (size varies)
    // bool = true or false (1 byte in modern systems)

    int age = 25;
    float gpa = 3.7;
    double pencetage = 99.9;
    char grade = 'A';
    char name[] = "Anass";
    bool is_active = true;
    
    printf("You are %d years old \n", age);
    printf("Your gpa is %f \n", gpa);
    printf("Your grade is %c \n", grade);
    printf("Your name is %s \n", name);
    printf("Is active: %d \n", is_active);
    printf("Your pencetage is %f \n", pencetage);

    return 0;
}