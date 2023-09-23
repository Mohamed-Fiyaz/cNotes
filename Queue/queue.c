// Queue

#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct Queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}

int isEmpty(struct Queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}

void enqueue(struct Queue *q, int val){
    if(isFull(q)){
        printf("This Queue is full");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
    }
}

int dequeue(struct Queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This Queue is empty");
    }
    else{
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main(){
    struct Queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size*sizeof(int));

    // Enqueue few elements
    enqueue(&q,12);
    enqueue(&q,15);
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));

    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }

    if(isFull(&q)){
        printf("Queue is full\n");
    }

    return 0;
}