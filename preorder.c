#include<stdio.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createNode(int val){
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=val;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
};
void traversepreorder(struct node *temp){
    if(temp!=NULL){
        printf("%d\n",temp->data);
        traversepreorder(temp->left);
        traversepreorder(temp->right);
    }
}
int main(){
    struct node *root=createNode(10);
    root->left=createNode(20);
    root->right=createNode(15);
    root->left->left=createNode(25);
    root->right->right=createNode(21);
    printf("preorder Traverse:\n");
    traversepreorder(root);
    getch();
}
