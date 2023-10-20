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

void preOrder(struct node *root){
    if(root!=NULL){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}

void inOrder(struct node *root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}

int isBST(struct node *root){
    static struct node *prev=NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data<=prev->data){
            return 0;
        }
        prev=root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

int main(){

    // Constructing the root node using functions
    struct node *p=createNode(5);
    struct node *p1=createNode(3);
    struct node *p2=createNode(6);
    struct node *p3=createNode(1);
    struct node *p4=createNode(4);

    /* // Finally the tree looks like this:

           5
          / \
         3   6
        / \
       1   4

    */

    // Linking the root node with left and right children
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p2->right=p4;

    inOrder(p);
    printf("\n");

    printf("%d", isBST(p));

    return 0;
}