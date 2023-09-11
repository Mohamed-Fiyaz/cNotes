// Stack using Array

#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr) {
    if(ptr->top == -1) {
        return 1;
    }
    else {
        return 0;
    }
}

int isFull(struct stack *ptr) {
    if(ptr->top == ptr->size - 1) {
        return 1;
    }
    else {
        return 0;
    }
}

void push(struct stack *ptr, int val) {
    if(isFull(ptr)) {
        printf("Stack Overflow!\n");
    }
    else {
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}

int pop(struct stack *ptr) {
    if(isEmpty(ptr)) {
        printf("Stack Underflow!\n");
        return -1;
    }
    else {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *sp,int i){
    int arrayInd=sp->top-i+1;
    if(arrayInd<0){
        printf("No a valid position for the stack\n");
        return -1;
    }
    else{
        return sp->arr[arrayInd];
    }
}

int main() {
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    printf("Enter the size of the array: ");
    scanf("%d", &sp->size);
    sp->top = -1;
    sp->arr = (int*)malloc(sp->size * sizeof(int));

    // Push operation
    push(sp, 2);
    push(sp, 4);
    push(sp, 6);
    push(sp, 8);

    // Pop operation
    printf("Popped: %d\n", pop(sp));
    printf("Popped: %d\n", pop(sp));

    // Peek operation used for displaying the stack elements
    for(int j=1;j<=sp->top+1;j++){
        printf("The value at position %d is %d\n",j,peek(sp,j));
    }

    return 0;
}
