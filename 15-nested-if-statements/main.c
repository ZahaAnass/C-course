#include <stdio.h>
#include <stdbool.h>

int main() {
    float price = 10.00;
    bool isStudent = true; // 10% discount
    bool isSenior = false; // 20% discount

    // student = $9
    // senior = $8
    // student + senior = $7

    if(isStudent){
        if(isSenior){
            printf("You get a student discount of 10%% \n");
            printf("You get a senior discount of 20%% \n");
            price *= 0.7;
        }else{
            printf("You get a student discount of 10%% \n");
            price *= 0.9;
        }
    }else if(isSenior){
        printf("You get a senior discount of 20%% \n");
        price *= 0.8;
    }else{
        printf("You get no discount\n");
    }

    printf("The price is: $%.2f\n", price);

    return 0;
}