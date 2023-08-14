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