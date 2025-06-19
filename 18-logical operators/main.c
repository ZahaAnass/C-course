#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operators = && (AND), || (OR), ! (NOT)
    
    int temp = 0;
    bool isSunny = false;

    if(!isSunny){
        printf("It is Cloudy outside\n");
    }else{
        printf("It is Sunny outside\n");
    }

    if(temp > 0 && temp < 30){
        printf("The temp is Good\n");
    }else if(temp == 0){
        printf("The temp is zero\n");
    }else if(temp < 0 || temp >= 30){
        printf("The temp is not in Bad\n");
    }

    return 0;
} 