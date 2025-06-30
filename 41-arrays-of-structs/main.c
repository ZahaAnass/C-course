#include <stdio.h>

typedef struct{
    char model[25];
    int year;
    int price;
} Car;

int main()
{

    // array of structs = Array where each element contains a struct {}
    //                    Helps organize and groups tigether related data.    

    Car car1 = {"Toyota", 2022, 20000};
    Car car2 = {"Honda", 2021, 25000};
    Car car3 = {"Ford", 2020, 30000};

    Car cars[3] = {car1, car2, car3};

    int number = sizeof(cars)/sizeof(cars[0]);

    for(int i = 0; i < number; i++){
        printf("Model: %s\tYear: %d\tPrice: %d\n", cars[i].model, cars[i].year, cars[i].price);
    }

    return 0;
}