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