/*
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

// nested structure
#include <stdio.h>
struct address {
    char address[100]; // Increased buffer size to accommodate longer addresses
};

struct person {
    char name[20];
    int age;
    struct address addr;
};

int main() {
    struct person p1;
    printf("Enter student's name: ");
    scanf("%s", p1.name);

    printf("Enter %s's age: ", p1.name);
    scanf("%d", &p1.age);

    printf("Enter the address: ");
    scanf(" %[^\n]", p1.addr.address); // Space before %[^\n] is essential to consume any leading whitespace

    // Display the entered information
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Address: %s\n", p1.addr.address);

    return 0;
}

// array of structures
#include<stdio.h>
struct student{
    int reg_no;
    char name[20];
    float cgpa;
};
int main(){
    int n;
    printf("Enter number of records to be entered: ");
    scanf("%d", &n);
    struct student s[n];
    for(int i=0;i<n;i++){
        printf("\nEnter the details of student%d: \n", i+1);
        printf("Reg_No: ");
        scanf("%d", &s[i].reg_no);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);
    }
    for(int i=0;i<n;i++){
        printf("The details of student%d: \n", i+1);
        printf("Reg_No: %d\n", s[i].reg_no);
        printf("Name: %s\n", s[i].name);
        printf("CGPA: %.2f\n", s[i].cgpa);
    }
    return 0;
}

// self-referential structures
#include<stdio.h>
struct code{
    int i;
    char c;
    struct code *ptr;
};

int main(){
    struct code var1,var2;
    var1.i=65;
    var1.c='A';
    var1.ptr=NULL;
    var2.i=66;
    var2.c='B';
    var2.ptr=NULL;
    var1.ptr=&var2;
    printf("%d %c",var1.ptr->i,var1.ptr->c); // accessing variables of var2 using var1
    return 0;
}

// pointer to structure variable
#include<stdio.h>
struct abc{
    int x;
    int y;
};
int main(){
    struct abc a = {0,1};
    struct abc *ptr = &a;
    printf("%d %d",ptr->x,ptr->y); // (*ptr).x is same as ptr->x here ptr=&a,
    // so we can say that ptr=&a therefore, (*&a).x here * and & are cancelled so ptr->x is same as a.x
    return 0;
}

// malloc
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n;
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    int *ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Memory not available.");
        exit(1);
    }
    for(i=0;i<n;i++){
        printf("Enter an integer: ");
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++){
        printf("%d",*(ptr+i)); // *(ptr+i) is dereferencing
    }
    return 0;
}
*/