#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age); // Function prototype
bool ageCheck(int age); // Function prototype

int main(){

    // function prototype = Provide the compiler with information about a function's:
    //                      name, return type, and parameters before its actual definition
    //                      Enables type checking and allows functions to be used before
    //                      they're defined.
    //                      Improves readability, organization, and helps prevent errors

    hello("Spongebob", 21);

    if(ageCheck(18)){
        printf("You can drive\n");
    }else{
        printf("You cannot drive\n");
    }

    return 0;
}


void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
};

bool ageCheck(int age){
    return age >= 18;
}