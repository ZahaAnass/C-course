#include <stdio.h>

int main ()
{

    // Array of Strings

    char fruits[][10] = {"Apple", "Banana", "Orange", "Mango"};
    int size = sizeof(fruits)/sizeof(fruits[0]);

    fruits[0][0] = 'e';
    fruits[0][4] = 'A';
    
    fruits[1][0] = 'a';
    fruits[1][5] = 'B';

    for(int i = 0; i < size; i++){
        printf("%s\n", fruits[i]);
    }

    return 0;
}
