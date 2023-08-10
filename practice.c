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
        scanf("%d",ptr+i); // & not needed since pointer is already containing the address
    }
    for(i=0;i<n;i++){
        printf("%d",*(ptr+i)); // *(ptr+i) is dereferencing
    }
    return 0;
}

// calloc
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n; // calloc accepts 2 arguments where one is number of blocks of memory to be assigned ad 2 is size of each block
    printf("Enter the number of integers: "); // memory allocated by calloc is initialized to 0 whereas in mallac it was some garbage value
    scanf("%d",&n);
    int *ptr=(int*)calloc(n,sizeof(int)); // instead of doing n*sizeof(int) like we did for malloc
    if(ptr==NULL){
        printf("Memory not available.");
        exit(1);
    }
    for(i=0;i<n;i++){
        printf("Enter an integer: ");
        scanf("%d",ptr+i); // & not needed since pointer is already containing the address
    }
    for(i=0;i<n;i++){
        printf("%d",*(ptr+i)); // *(ptr+i) is dereferencing
    }
    return 0;
}

// realloc and free
#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr = (int*)malloc(2*sizeof(int));
    if(ptr==NULL){
        printf("Memory not available.");
        exit(1);
    }
    for(int i=0;i<2;i++){
        printf("Enter an integer: ");
        scanf("%d",ptr+i); // & not needed since pointer is already containing the address
    }
    ptr = (int*)realloc(ptr, 4*sizeof(int));
    if(ptr==NULL){
        printf("Memory not available.");
        exit(1);
    }
    printf("Enter 2 more integers: ");
    for(int i=2;i<4;i++){
        scanf("%d",ptr+i); // & not needed since pointer is already containing the address
    }
    for(int i=0;i<4;i++){
        printf("%d",*(ptr+i)); // *(ptr+i) is dereferencing
    }
    free(ptr); // releaseing the memoory at the end
    ptr=NULL;
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,k,r,c;
    printf("Enter rows: ");
    scanf("%d",&r);
    printf("Enter columns: ");
    scanf("%d",&c);
    int **a=(int**)malloc(r*sizeof(int));
    int **b=(int**)malloc(r*sizeof(int));
    int **mul=(int**)malloc(r*sizeof(int));
    for(i=0;i<r;i++){
        a[i]=(int*)malloc(c*sizeof(int));
        b[i]=(int*)malloc(c*sizeof(int));
        mul[i]=(int*)malloc(c*sizeof(int));
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter [%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter [%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            mul[i][j]=0;
            for(k=0;k<c;k++){
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",mul[i][j]);
        }printf("\n");
    }
    for(i=0;i<r;i++){
        free(a[i]);
        free(b[i]);
        free(mul[i]);
    }
    free(a);
    free(b);
    free(mul);
    return 0;
}

#include<stdio.h>
struct student{
    char name[20];
    int age;
    int phyM;
    int chemM;
    int mathM;
};
int main(){
    int n;
    printf("Enter total number of students record to be entered: ");
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++){
        printf("Enter Student name: ");
        scanf("%s",s[i].name);
        printf("Enter his age: ");
        scanf("%d",&s[i].age);
        printf("Enter Physics Marks: ");
        scanf("%d",&s[i].phyM);
        printf("Enter Chemistry Marks: ");
        scanf("%d",&s[i].chemM);
        printf("Enter Mathematics Marks: ");
        scanf("%d",&s[i].mathM);
    }
    for(int i=0;i<n;i++){
        printf("Name: %s\n",s[i].name);
        printf("Age: %d\n",s[i].age);
        printf("Physics: %d\n",s[i].phyM);
        printf("Chemistry: %d\n",s[i].chemM);
        printf("Mathematics: %d\n",s[i].mathM);
    }
    return 0;
}

// self-referential structure example
#include<stdio.h>
struct student{
    char name[20];
    int reg_no;
    char dept[20];
    struct student *ptr;
};
int main(){
    struct student s1;
    printf("Enter student's name: ");
    scanf("%s", s1.name);
    printf("Enter student's roll number: ");
    scanf("%d", &s1.reg_no);
    printf("Enter student's department: ");
    scanf("%s", s1.dept);
    s1.ptr=NULL;
    struct student s2;
    printf("Enter student's name: ");
    scanf("%s", s2.name);
    printf("Enter student's roll number: ");
    scanf("%d", &s2.reg_no);
    printf("Enter student's department: ");
    scanf("%s", s2.dept);
    s1.ptr=&s2;
    printf("Name: %s\n",s1.ptr->name);
    printf("Roll Number: %d\n",s1.ptr->reg_no);
    printf("Department: %s\n",s1.ptr->dept);
    return 0;
}

// fibonacci
#include <stdio.h>

// Function to generate Fibonacci series
void fibonacciSeries(int n) {
    int fib[n]; // Array to store Fibonacci numbers

    fib[0] = 0; // First Fibonacci number
    fib[1] = 1; // Second Fibonacci number

    // Generate Fibonacci numbers from the third number onwards
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Print the Fibonacci series
    printf("Fibonacci Series up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");
}

int main() {
    int terms;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &terms);

    if (terms <= 0) {
        printf("Number of terms must be greater than zero.\n");
    } else {
        fibonacciSeries(terms);
    }

    return 0;
}

// calculate area of rectangle
#include<stdio.h>
struct rectangle{
    int l,b;
};
struct rectangle r1;
int area(){
    return r1.l*r1.b;
}
int main(){
    printf("Rectangle length: ");
    scanf("%d",&r1.l);
    printf("Rectangle length: ");
    scanf("%d",&r1.b);
    printf("%d",area());
    return 0;
}

// pointers
#include <stdio.h>
int main() {
    int num = 42; // Declare an integer variable
    int *ptr;     // Declare a pointer to an integer

    ptr = &num;   // Assign the address of num to ptr

    printf("Value of num: %d\n", num);       // Output: Value of num: 42
    printf("Address of num: %p\n", &num);    // Output: Address of num: (memory address)
    printf("Value of ptr: %p\n", ptr);       // Output: Value of ptr: (memory address)
    printf("Value pointed by ptr: %d\n", *ptr); // Output: Value pointed by ptr: 42

    *ptr = 99;    // Assign a new value to the memory location pointed by ptr

    printf("Updated value of num: %d\n", num); // Output: Updated value of num: 99

    return 0;
}

#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function with the addresses of num1 and num2
    swap(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
