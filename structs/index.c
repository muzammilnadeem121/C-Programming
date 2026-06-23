#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
} Student;

int main(){

    Student Student1 = { "John Doe", 30, 3.5, true };
    Student Student2 = {0};

    strcpy(Student2.name, "Brad Pitt");
    Student2.age = 50;
    Student2.gpa = 4.1;
    Student2.isFullTime = false;

    printf("Name: %s\n", Student1.name);
    printf("Age: %d\n", Student1.age);
    printf("GPA: %.1f\n", Student1.gpa);
    printf("isFullTime: %s\n", (Student1.isFullTime) ? "Yes" : "No");
    printf("\n");
    printf("Name: %s\n", Student2.name);
    printf("Age: %d\n", Student2.age);
    printf("GPA: %.1f\n", Student2.gpa);
    printf("isFullTime: %s\n", (Student2.isFullTime) ? "Yes" : "No");

    return 0;
}