#include <stdio.h>

typedef int Number;
typedef char String[50];
typedef char Initials[3];

int main()
{
    
    // typedef = reservad keyword that gives an existing datatypes a "nickname"
    //           Helps simplify complex types and improves code readability

    //           typedef existing_type new_name;



    String name = "Anass";
    Initials user1 = "BC";
    Initials user2 = "SS";
    Initials user3 = "PS";
    Initials user4 = "ST";

    printf("%s\n", name);
    printf("%s\n", user1);
    printf("%s\n", user2);
    printf("%s\n", user3);
    printf("%s\n", user4);


    return 0;
}