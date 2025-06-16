#include <stdio.h>

int main() {

    // Format specifier = a way to tell printf how to print a value.
    //                    For example: %d, %f, %c, %s, ...

    int age = 25;
    float price = 19.99;
    double pi = 3.14159226535;
    char currency = '$';
    char name[] = "Anass";

    printf("%d\n", age);
    printf("%+d\n", age);
    printf("%f\n", price);
    printf("%.2f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);

    return 0;
}