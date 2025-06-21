#include <stdio.h>

int result = 0; // GLOBAL SCOPE (hard to debug)

int add(int x, int y){
    int result = x + y;
    return result;
}

int sutract(int x, int y){
    int result = x - y;
    return result;
}

int main(){
    // variable scope = Refers to where a variable is recognized and accessible.
    //                  Variable can share the same name if
    //                  they are in different scopes {}.
    
    int x = 10; // Local Scope
    int y = 20; // Local Scope

    int result1 = add(x, y);
    int result2 = sutract(x, y);
    printf("Result1: %d\n", result1);
    printf("Result2: %d\n", result2);

    return 0;
}