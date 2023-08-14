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