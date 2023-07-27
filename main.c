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

*/

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
