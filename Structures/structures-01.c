// global variable structure
#include <stdio.h>
struct student {
    char name[20];
    int age;
};

struct student s1; // Global variable

void display() {
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
}

int main() {
    printf("Enter student's name: ");
    scanf("%s", s1.name);  // Use %s to read a string

    printf("Enter %s's age: ", s1.name);  // Use %s to display a string
    scanf("%d", &s1.age);  // Add & before s1.age to correctly read the age

    display();
    return 0;
}
