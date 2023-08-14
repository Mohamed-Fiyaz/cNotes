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