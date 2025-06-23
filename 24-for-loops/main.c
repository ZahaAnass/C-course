#include <stdio.h>
// #include <windows.h> // for windows for time sleep
#include <unistd.h> // for linux for time sleep

int main() {

    // for loop = Repeat some code a limited amount of times
    //            for(Initialization; Condition; Increment)

    for(int i = 10; i > -1; i--){
        sleep(1);
        printf("%d\n", i);
    }

    printf("Happy New Year\n");

    return 0;
}