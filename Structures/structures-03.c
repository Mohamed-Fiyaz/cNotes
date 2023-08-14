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