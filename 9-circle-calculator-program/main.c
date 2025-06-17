#include <stdio.h>
#include <math.h>


int main ()
{

    double raduis = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("Enter the raduis: ");
    scanf("%lf", &raduis);

    area = PI * pow(raduis, 2);
    surfaceArea = 4 * PI * pow(raduis, 2);
    volume = (4.0 / 3.0) * PI * pow(raduis, 2);

    printf("Area: %.2f\n", area);
    printf("Surface Area: %.2lf\n", surfaceArea);
    printf("Volume: %.2lf\n", volume);


    return 0;
}