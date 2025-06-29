#include <stdio.h>
#include <string.h>

int main ()
{

    // EXERCICE

    char names[3][25] = {0};

    for(int i = 0; i < 3; i++){
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }

    for(int i = 0; i < 3; i++){
        printf("%s\n", names[i]);
    }





    return 0;
}