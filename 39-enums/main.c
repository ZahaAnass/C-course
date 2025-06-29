#include <stdio.h>

typedef enum {
    MONDAY = 2,
    TUESDAY = 3,
    WEDNESDAY = 4,
    THURSDAY = 5,
    FRIDAY = 6,
    SATURDAY = 7,
    SUNDAY = 1
} Day;

enum Status{
    SUCCESS,
    FAILED,
    PENDING
};

void connectStatus(enum Status status);

int main()
{
    // enum = A user-defined data type that consists 
    //        of a set of named integer constants 
    //        Benefit: Replaces numbers with readable names

    Day today = SUNDAY;

    if(today == SUNDAY || today == SATURDAY){
        printf("It's the Weekend\n");
    }
    else{
        printf("It's a Weekday\n");
    }



    enum Status status = PENDING;

    connectStatus(status);

    printf("%d\n", today);
    printf("%d\n", status);


    return 0;
}

void connectStatus(enum Status status){
    switch(status){
        case PENDING:
            printf("Connecting...\n");
            break;
        case SUCCESS:
            printf("Connection was seccessfull\n");
            break;
        case FAILED:
            printf("Connection failed\n");
            break;
    }
}