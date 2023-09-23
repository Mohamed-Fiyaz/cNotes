// Doubly linked list and operations

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

// Case 1: Delete the head of the doubly linked list
struct Node *deleteFirst(struct Node *head) {
    struct Node *ptr = head;
    head = head->next;
    head->prev = NULL;
    free(ptr);
    return head;
}

// Case 2: Deleting an element from a specific index of the doubly linked list
struct Node *deleteAtIndex(struct Node *head, int index) {
    struct Node *p = head;
    for (int i = 0; i < index; i++) {
        p = p->next;
    }
    p->prev->next = p->next;
    if (p->next != NULL) {
        p->next->prev = p->prev;
    }
    free(p);
    return head;
}

// Case 3: Deleting the tail of the doubly linked list
struct Node *deleteLast(struct Node *head) {
    struct Node *p = head;
    while (p->next != NULL) {
        p = p->next;
    }
    p->prev->next = NULL;
    free(p);
    return head;
}

// Case 4: Deleting an element with a given value from the doubly linked list
struct Node *deleteFromValue(struct Node *head, int value) {
    struct Node *p = head;
    while (p != NULL) {
        if (p->data == value) {
            if (p->prev != NULL) {
                p->prev->next = p->next;
            }
            if (p->next != NULL) {
                p->next->prev = p->prev;
            }
            free(p);
            break;
        }
        p = p->next;
    }
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

    printf("Doubly linked list before deletion:\n");
    forwardTraversal(head);

    // head = deleteFirst(head); // For deleting the head of the doubly linked list
    // head = deleteAtIndex(head, 2); // For deleting an element from the given index
    // head = deleteLast(head); // For deleting the tail of the doubly linked list
    head = deleteFromValue(head, 300); // For deleting an element with a given value

    printf("Doubly linked list after deletion:\n");
    forwardTraversal(head);

    return 0;
}
