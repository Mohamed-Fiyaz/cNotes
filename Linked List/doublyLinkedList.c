// Doubly Linked List

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

void forwardTraversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }printf("\n");
}

void backwardTraversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr=ptr->prev;
    }printf("\n");
}

int main(){
    struct Node *head;
    struct Node *n1;
    struct Node *n2;
    struct Node *n3;
    struct Node *n4;
    struct Node *tail;

    head=(struct Node *)malloc(sizeof(struct Node ));
    n1=(struct Node *)malloc(sizeof(struct Node ));
    n2=(struct Node *)malloc(sizeof(struct Node ));
    n3=(struct Node *)malloc(sizeof(struct Node ));
    n4=(struct Node *)malloc(sizeof(struct Node ));
    tail=(struct Node *)malloc(sizeof(struct Node ));

    head->data=100;
    head->prev=NULL;
    head->next=n1;

    n1->data=200;
    n1->prev=head;
    n1->next=n2;

    n2->data=300;
    n2->prev=n1;
    n2->next=n3;

    n3->data=400;
    n3->prev=n2;
    n3->next=n4;

    n4->data=500;
    n4->prev=n3;
    n4->next=tail;

    tail->data=600;
    tail->prev=n4;
    tail->next=NULL;

    forwardTraversal(head);
    backwardTraversal(tail);

    return 0;
}