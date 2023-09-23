#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Node {
    int data;
    int next; // Cursor
};

struct Node list[MAX_SIZE];
int head = -1; // Index of the first element in the list
int freeList = 0; // Index of the first element in the free list

// Function to initialize the free list
void initializeFreeList() {
    for (int i = 0; i < MAX_SIZE - 1; i++) {
        list[i].next = i + 1;
    }
    list[MAX_SIZE - 1].next = -1; // End of the free list
}

// Function to get a free node from the free list
int getFreeNode() {
    if (freeList == -1) {
        printf("Out of memory!\n");
        exit(1);
    }
    int newNode = freeList;
    freeList = list[freeList].next;
    return newNode;
}

// Function to insert an element at the beginning of the list
void insert(int newData) {
    int newNode = getFreeNode();
    list[newNode].data = newData;
    list[newNode].next = head;
    head = newNode;
}

// Function to delete an element from the list
void deleteElement(int targetData) {
    int currentNode = head;
    int prevNode = -1;

    while (currentNode != -1 && list[currentNode].data != targetData) {
        prevNode = currentNode;
        currentNode = list[currentNode].next;
    }

    if (currentNode != -1) {
        if (prevNode != -1) {
            list[prevNode].next = list[currentNode].next;
        } else {
            // Deleting the head node
            head = list[currentNode].next;
        }
        list[currentNode].next = freeList;
        freeList = currentNode;
    } else {
        printf("%d not found in the list.\n", targetData);
    }
}

// Function to display the list
void display() {
    int currentNode = head;
    printf("List: ");
    while (currentNode != -1) {
        printf("%d -> ", list[currentNode].data);
        currentNode = list[currentNode].next;
    }
    printf("NULL\n");
}

int main() {
    initializeFreeList();

    insert(10);
    insert(20);
    insert(30);
    insert(40);

    display();

    deleteElement(20);
    display();

    deleteElement(50); // Element not in the list
    display();

    return 0;
}
