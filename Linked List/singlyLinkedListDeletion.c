// Singly Linked List and operations

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

// Case 1: Delete the head of the linked list
struct Node *deleteFirst(struct Node *head){
    struct Node *ptr =head;
    head=head->next; // Assigning the next node as the head
    free(ptr);
    return head;
}

// Case 2: Deleting an element from a specific index of the linked list
struct Node *deleteAtIndex(struct Node *head, int index){
    struct Node *p=head;
    struct Node *q=head->next;
    for(int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}

// Case 3: Deleting the tail of the linked list
struct Node *deleteLast(struct Node *head){
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}

// Case 4: Deleting an element with a given value from the linked list
struct Node *deleteFromValue(struct Node *head, int value){
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->data!=value && q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
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

    printf("Linked list before deletion:\n");
    linkedListTraversal(head);

    //head=deleteFirst(head); // For deleting first element of the linked list
    //head=deleteAtIndex(head,2); // For deleting the element from the given index
    //head=deleteLast(head); // for deleting the tail of the linked list
    head=deleteFromValue(head,11); // for deleting the given value from the linked list

    printf("Linked list after deletion:\n");
    linkedListTraversal(head);

    return 0;
}