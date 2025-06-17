#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float x = 3.14;
    int y = -3;
    float z = 45;

    x = sqrt(x);
    x = pow(x, 3);
    x = round(x);
    x = ceil(x);
    x = floor(x);
    x = abs(y);
    x = log(x);
    x = sin(z);
    x = cos(z);
    x = tan(z);

    printf("%f", x);

    return 0;
}

// run it with command 
//     gcc main.c -lm && ./a.out