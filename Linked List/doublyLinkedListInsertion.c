// Doubly Linked List and operations

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

void forwardTraversal(struct Node *ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void backwardTraversal(struct Node *ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->prev;
    }
    printf("\n");
}

struct Node *insertAtFirst(struct Node *head, int data) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->prev = NULL;
    ptr->next = head;
    head->prev = ptr;
    return ptr;
}

struct Node *insertAtEnd(struct Node *head, int data) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    while (p->next != NULL) {
        p = p->next;
    }
    ptr->data = data;
    ptr->next = NULL;
    ptr->prev = p;
    p->next = ptr;
    return head;
}

struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevNode->next;
    ptr->prev = prevNode;
    prevNode->next->prev = ptr;
    prevNode->next = ptr;
    return head;
}

struct Node *insertAtIndex(struct Node *head, int data, int index) {
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1) {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    ptr->prev = p;
    p->next->prev = ptr;
    p->next = ptr;
    return head;
}

int main() {
    struct Node *head;
    struct Node *n1;
    struct Node *n2;
    struct Node *n3;
    struct Node *n4;
    struct Node *tail;

    head = (struct Node *)malloc(sizeof(struct Node));
    n1 = (struct Node *)malloc(sizeof(struct Node));
    n2 = (struct Node *)malloc(sizeof(struct Node));
    n3 = (struct Node *)malloc(sizeof(struct Node));
    n4 = (struct Node *)malloc(sizeof(struct Node));
    tail = (struct Node *)malloc(sizeof(struct Node));

    head->data = 100;
    head->prev = NULL;
    head->next = n1;

    n1->data = 200;
    n1->prev = head;
    n1->next = n2;

    n2->data = 300;
    n2->prev = n1;
    n2->next = n3;

    n3->data = 400;
    n3->prev = n2;
    n3->next = n4;

    n4->data = 500;
    n4->prev = n3;
    n4->next = tail;

    tail->data = 600;
    tail->prev = n4;
    tail->next = NULL;

    forwardTraversal(head);
    backwardTraversal(tail);

    printf("Doubly linked list before insertion: \n");
    forwardTraversal(head);

    // head = insertAtFirst(head,20);
    // head = insertAtEnd(head,20);
    // head = insertAfterNode(head, n4, 66);
    head = insertAtIndex(head, 77, 3);


    printf("Doubly linked list after insertion: \n");
    forwardTraversal(head);




    return 0;
}
