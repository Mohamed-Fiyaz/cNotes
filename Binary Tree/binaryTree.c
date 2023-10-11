#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data){
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node)); // Allocating memory in heap
    n->data=data; // Setting the data
    n->left=NULL; // Setting the left and right children to NULL
    n->right=NULL; // Setting the left and right children to NULL
    return n;
}

int main(){

    /* Method 1
    // Constructing the root node
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=2;
    p->left=NULL;
    p->right=NULL;

    // Constructing the second node
    struct node *p1;
    p->data=1;
    p1=(struct node*)malloc(sizeof(struct node));
    p1->left=NULL;
    p1->right=NULL;

    // Constructing the third node
    struct node *p2;
    p->data=4;
    p2=(struct node*)malloc(sizeof(struct node));
    p2->left=NULL;
    p2->right=NULL;
    */

    // Method - 2 constructing the root node using functions
    struct node *p=createNode(2);
    struct node *p1=createNode(1);
    struct node *p2=createNode(4);

    // Linking the root node with left and right children
    p->left=p1;
    p->right=p2;

    return 0;
}