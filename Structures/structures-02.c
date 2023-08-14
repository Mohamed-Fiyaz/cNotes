// using typedef
#include<stdio.h>
typedef struct student {
    char name[20];
    int age;
}std; // std is alias name
int main(){
    std s1; // same as s2 declaration
    struct student s2;
    printf("Enter student's name: ");
    scanf("%s", s1.name);
    printf("Enter %s's age: ", s1.name);
    scanf("%d", &s1.age);
    return 0;
}
