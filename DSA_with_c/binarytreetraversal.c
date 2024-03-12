#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* left;
    struct node* right;
};
//inorder traversal
void inordertraversal(struct node* root){
    if(root==NULL)
    return;
    inordertraversal(root->left);
    printf("%d \n",root->data);
    inordertraversal(root->right);
}
//preorder Traversal
void preordertraversal(struct node* root){
    if(root==NULL)return;
    printf("%d \n",root->data);
    preordertraversal(root->left);
    preordertraversal(root->right);
}
//postorder Traversal
void postorderTraversal(struct node*root){
    if(root==NULL)
    return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d \n",root->data);
}
//create a new node
struct node* createNode(int value){
    struct node*newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=value;
    newNode->left=NULL;
    newNode->right = NULL;

return newNode;
}

 //insert on the left of the node
 struct node* insertLeft(struct node* root,int value){
 root->left = createNode(value);
 return root->left;
 }

 //insert on the right of the node
 struct node* insertRight(struct node* root,int value){
 root->right = createNode(value);
 return root->right;
 }

 int main(){
    struct node*root = createNode(1);
    insertLeft(root,12);
    insertRight(root,9);

     insertLeft(root->left,5);
    insertRight(root->left,6);

    printf("inorder traversal\n");
    inordertraversal(root);

    printf("Preorder traversal\n");
    inordertraversal(root);

    printf("Postorder traversal\n");
    inordertraversal(root);

 }