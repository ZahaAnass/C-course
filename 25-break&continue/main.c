#include <stdio.h>

int main() {

    // break = Break out of a loop (STOP)
    // continue = Skip current cycle of a loop (SKIP)

    for(int i = 0; i < 10; i++){
        if(i == 4){
            continue;
        }if(i == 8){
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}