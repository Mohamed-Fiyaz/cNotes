/*#include <stdio.h>
struct str{
    int mem1;
    int mem2;
    struct str* next;
}str;
int main() {
    struct str var1 = {1,2,NULL};
    struct str var2 ={10,20,NULL};
    var1.next = &var2;
    struct str *ptr1 = &var1;
    printf("var2.mem1: %d\nvar2.mem2: %d", ptr1->next->mem1,ptr1->next->mem2);
    return 0;
}

#include<stdio.h>
struct product{
    char brand[30];
    char product_name[30];
    char category[30];
    int price;
};
int main(){
    struct product* p1,p2;
    p1 = &p2;
    printf("Enter the product's category: ");
    scanf("%s", p1->category);
    printf("Enter the name of the brand: ");
    scanf("%s", p1->brand);
    printf("Enter the name of the product: ");
    scanf("%s", p1->product_name);
    printf("Enter the price of the product: ");
    scanf("%d", &p1->price);
    printf("\nCategory: %s\nBrand: %s\nProduct Name: %s\nPrice: %d\n",p1->category,p1->brand,p1->product_name,p1->price);

    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main(){
    int num, i, *ptr, sum =0;
    printf("Enter number of elements in the Array: ");
    scanf("%d", &num);
    ptr=(int*)malloc(num*sizeof(int));
    if(ptr==NULL){
        printf("Error! Unable to allocate memory.");
        exit(0);
    }
    printf("Enter elements of array: ");
    for(i=0;i<num;i++){
        scanf("%d",ptr+i);
    }
    for(i=0;i<num;i++){
        sum+=*(ptr+i);
    }
    printf("Sum of Elements in the given array is: %d", sum);
    free(ptr);
    return 0;
}

// Matrix Addition
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int a[r][c],b[r][c],add[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the elements for a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the elements for b[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            add[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",add[i][j]);
        }printf("\n");
    }
    return 0;

}

// Matrix Transpose
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int a[r][c],t[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the elements for a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<r;i++)
        for(int j=0; j<c;j++)
            t[i][j]=a[j][i];

    printf("Original Matrix: \n");

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }printf("\n");
    }

    printf("Transpose: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",t[i][j]);
        }printf("\n");
    }
    return 0;
}

// Matrix Multiplication
#include<stdio.h>
int main() {
    int r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int a[r][c], b[r][c], mul[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter the elements for a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter the elements for b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            mul[i][j]=0;
            for (int k = 0; k < c; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",mul[i][j]);
        }printf("\n");
    }
    return 0;
}

#include<stdio.h>
struct student{
    char name[40];
    int roll;
    float CPI;
    int backlog;
};

int main(){
    struct student student1;
    printf("Enter Student Name: ");
    scanf("%s", student1.name);
    printf("Enter Student Roll Number: ");
    scanf("%d", &student1.roll);
    printf("Enter Student CPI: ");
    scanf("%f", &student1.CPI);
    printf("Enter Student Backlog: ");
    scanf("%d", &student1.backlog);
    printf("\nStudent using simple structure variable.\n");
    printf("Student name: %s\n", student1.name);
    printf("STudent Enrollment:5d\n", student1.roll);
    printf("Student CPI: %.2f\n", student1.CPI);
    printf("Student backlog %i\n", student1.backlog);
    return 0;
}
*/

