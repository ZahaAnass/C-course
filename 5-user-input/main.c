#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

    // User input = allows a program to receive data from a user
    // scanf() = read input from the user

    int age = 0; // reset value to skip any previous value
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = ""; // max 30 char

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    getchar(); // to consume the newline character left in the input buffer
    printf("Enter your full name: ");
    // scanf(" %s", name);
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; // remove the newline character

    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0;
}