#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

    int age = 0;
    bool isStudent = false;
    char name[50] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0) {
        printf("Invalid age\n");
    } else if (age == 0) {
        printf("You are not born yet\n");
    } else if (age >= 18 && age < 65) {
        printf("You are an adult\n");
        isStudent = false;
    } else if (age >= 65) {
        printf("You are a senior\n");
        isStudent = false;
    } else {
        printf("You are a child\n");
        isStudent = true;
    }

    printf("Is student? %s\n", isStudent ? "true" : "false");

    getchar();
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    if(strlen(name) == 0){
        printf("You did not enter your name");
    }else{
        printf("Hello %s", name);
    }

    return 0;
}