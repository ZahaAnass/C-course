#include <stdio.h>
#include <stdbool.h>

double square(double num) {
    return num * num;
}

double cube(double num) {
    return num * num * num;
}

bool ageCheck(int age){
    if(age >= 18){
        return true;
    }else{
        return false;
    }
}

int getMax(int x, int y){
    if(x >= y){
        return x;
    }else{
        return y;
    }
}

int main() {

    double x = square(2.1);
    double y = square(3.2);
    double z = square(4.3);

    double a = cube(2.1);
    double b = cube(3.2);
    double c = cube(4.3);

    printf("%lf\n", x);
    printf("%lf\n", y);
    printf("%lf\n", z);

    printf("%lf\n", a);
    printf("%lf\n", b);
    printf("%lf\n", c);

    int age = 21;

    if(ageCheck(age)){
        printf("You may sign up\n");
    }else{
        printf("You must be 18+ to sign up\n");
    }

    int max = getMax(10, 20);
    printf("The max is %d\n", max);


    return 0;
}