#include <stdio.h>

int main ()
{

    // array = A fixed-size collection of elements of the same data type
    //         (Similar to a variable, but it holds more that 1 value)

    int numbers[] = {10, 20, 30, 40, 50};
    char grades[] = {'A', 'B', 'C', 'D', 'E'};
    char name[] = "Anass";

    numbers[0] = 100;
    numbers[1] = 90;
    numbers[2] = 80;
    numbers[3] = 70;
    numbers[4] = 60;

    printf("%ld size of array \n", sizeof(numbers));
    printf("%ld size of element \n", sizeof(numbers[2]));

    int size = sizeof(numbers)/sizeof(numbers[0]);

    for(int i = 0; i < size; i++){
        printf("%c\t", grades[i]);
        printf("%d\t", numbers[i]);
        printf("%c\n", name[i]);
    }



    return 0;
}