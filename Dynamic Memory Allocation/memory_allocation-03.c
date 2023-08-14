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