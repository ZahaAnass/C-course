#include <stdio.h>

int main() {

    int a = 10;
    int b = 20;

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);
    printf("a++ = %d\n", a++);
    printf("b-- = %d\n", b--);
    a--;
    b--;
    printf("++a = %d\n", ++a);
    printf("--b = %d\n", --b);

    return 0;
}