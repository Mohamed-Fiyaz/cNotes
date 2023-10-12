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

/* // Finally the tree looks like this:

           4
          / \
         1   6
        /     \
       5       2

*/

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

int main(){

    // Constructing the root node using functions
    struct node *p=createNode(4);
    struct node *p1=createNode(1);
    struct node *p2=createNode(6);
    struct node *p3=createNode(5);
    struct node *p4=createNode(2);

    // Linking the root node with left and right children
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p2->right=p4;

    printf("Preorder: \n");
    preOrder(p);
    printf("\n");

    printf("Postorder: \n");
    postOrder(p);
    printf("\n");

    printf("Inorder: \n");
    inOrder(p);
    printf("\n");

    return 0;
}