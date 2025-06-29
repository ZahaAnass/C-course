#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// struct Student{
//     char name[50];
//     int age;
//     float gpa;
//     bool isFullTime;
// };

typedef struct {
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student;

void printStudent(Student student);    

int main()
{

    // struct = A custom container that holds multiple
    //          pieces of related information.
    //          Similar to Object in other languages

    Student student1 = {"Spongebob", 30, 2.5, true};
    Student student2;
    strcpy(student2.name, "Sandy");
    student2.age = 22;
    student2.gpa = 3.0;
    student2.isFullTime = false;
    Student student3 = {"Squidward", 25, 2.0, false};

    printStudent(student1);
    printStudent(student2);
    printStudent(student3);

    return 0;
}

void printStudent(Student student){
    printf("\nStudent 1: \nName: %s\nAge: %d\nGPA: %.2f\nIs Full Time: %s\n", student.name, student.age, student.gpa, student.isFullTime ? "Yes" : "No");
}