#include <stdio.h>
#include <stdbool.h>

int main(){

    bool isRunning = true;
    char response = '\0';

    while(isRunning){
        printf("You are playing a game\n");
        printf("Would you like to continue? (Y = yes, N = no): ");
        scanf(" %c", &response);

        if(response != 'Y' && response != 'y'){
            isRunning = false;
        }
    }

    printf("Thank you for playing\n");

    return 0;
}
