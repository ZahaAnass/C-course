#include <stdio.h>
#include <math.h>

int main(){
    // SCIENTIFIC CALCULATOR PROGRAM
    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;
    
    printf("Scientific Calculator\n");
    printf("Available operations:\n");
    printf("Basic: +, -, *, /\n");
    printf("Scientific: ^ (power), q (square root), c (cos), s (sin), t (tan), l (log), e (exp)\n");
    
    printf("\nEnter the operation: ");
    scanf(" %c", &operator);

    switch (operator){
        case '+':
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            result = num1 + num2;
            break;
        case '-':
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            result = num1 - num2;
            break;
        case '*':
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            result = num1 * num2;
            break;
        case '/':
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            if(num2 != 0){
                result = num1 / num2;
            }else{
                printf("Error: Division by zero\n");
                return 1;
            }
            break;
        case '^':
            printf("Enter the base: ");
            scanf("%lf", &num1);
            printf("Enter the exponent: ");
            scanf("%lf", &num2);
            result = pow(num1, num2);
            break;
        case 'q':
            printf("Enter the number: ");
            scanf("%lf", &num1);
            if(num1 >= 0) {
                result = sqrt(num1);
            } else {
                printf("Error: Cannot take square root of negative number\n");
                return 1;
            }
            break;
        case 'c':
            printf("Enter the angle in degrees: ");
            scanf("%lf", &num1);
            result = cos(num1 * M_PI / 180.0);
            break;
        case 's':
            printf("Enter the angle in degrees: ");
            scanf("%lf", &num1);
            result = sin(num1 * M_PI / 180.0);
            break;
        case 't':
            printf("Enter the angle in degrees: ");
            scanf("%lf", &num1);
            result = tan(num1 * M_PI / 180.0);
            break;
        case 'l':
            printf("Enter the number: ");
            scanf("%lf", &num1);
            if(num1 > 0) {
                result = log(num1);
            } else {
                printf("Error: Logarithm undefined for non-positive numbers\n");
                return 1;
            }
            break;
        case 'e':
            printf("Enter the exponent: ");
            scanf("%lf", &num1);
            result = exp(num1);
            break;
        default:
            printf("Error: Invalid operation\n");
            return 1;
    }

    printf("Result: %.6lf\n", result);
    return 0;
}