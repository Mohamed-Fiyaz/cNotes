// Singly linked list and operations

#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct Node *insertAtFirst(struct node *head, int data){
    struct Node *ptr=(struct Node *) malloc(sizeof(struct Node));
    ptr->next=head; // The next value for the new head is the previous head
    ptr->data=data; // The data given as an argument
    return ptr;
}

struct Node *insertAtEnd(struct node *head, int data){
    struct Node *ptr=(struct Node *) malloc(sizeof(struct Node));
    ptr->data=data; // The data given as an argument
    struct Node *p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data){
    struct Node *ptr=(struct Node *) malloc(sizeof(struct Node));
    ptr->data=data; // The data given as an argument
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
}

struct Node *insertAtIndex(struct node *head, int data, int index){
    struct Node *ptr=(struct Node *) malloc(sizeof(struct Node));
    struct Node *p=head;
    int i=0;
    while(i!=index-1){
        p=p->next; // p is kept right before the index we want to insert at
        i++;
    }
    ptr->data=data;
    ptr->next=p->next; // ptr is pointing to the node after p
    p->next=ptr; // We now connect p with ptr
    return head;
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in heap
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data=7;
    head->next=second;

    // Link second and third nodes
    second->data=11;
    second->next=third;

    // Link third and fourth nodes
    third->data=41;
    third->next=fourth;

    // Terminate the list at the fourth node
    fourth->data=66;
    fourth->next=NULL;

    printf("Linked list before insertion:\n");
    linkedListTraversal(head);

    //head = insertAtFirst(head, 56);
    //head = insertAtIndex(head,56,1);
    //head = insertAtEnd(head, 78);
    head = insertAfterNode(head, second, 99);
    printf("Linked list after insertion:\n");
    linkedListTraversal(head);

    return 0;
}