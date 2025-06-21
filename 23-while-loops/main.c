#include <stdio.h>
#include <string.h>

int main(){

    // while loop = Continue some code WHILE the condition remains true
    //              Condition must be true for us to enter while loop

    // int number = -1;

    // while(number < 0){
    //     printf("Enter a number greater that 0: ");
    //     scanf("%d", &number);
    // }

    // do{
    //     printf("Enter a number greater that 0: ");
    //     scanf("%d", &number);
    // }while(number < 0);

    // printf("You entered: %d\n", number);

    char name[50] = "";
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0){
        printf("You did not enter your name\n");
        printf("Enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s\n", name);

    return 0;
}