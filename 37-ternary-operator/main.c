#include <stdio.h>
#include <stdbool.h>

int main()
{
    // ternary operator ? = shorthand for if-else statements

    // (condition) ? value_if_true : value_if_false;

    int age = 20;
    char *result = (age >= 18) ? "You are eligible to vote" : "You are not eligible to vote";
    printf("%s\n", result);

    int num = 5;
    char *result2 = (num & 1) ? "Odd" : "Even";
    printf("%s\n", result2);

    return 0;
}