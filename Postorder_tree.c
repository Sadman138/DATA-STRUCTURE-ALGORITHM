#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left,*right;
};

void printPostorder(struct node* root)
{
    if(root==NULL)
    {
        return ;
    }
  printPostorder(root->left);
  printPostorder(root->right);
    printf("%d",root->data);
}
struct node* newnode(int value)
{
    struct node* root=(struct node*)malloc(sizeof(struct node));
    root->data=value;
    root->left=NULL;
    root->right=NULL;
    return root;

}
int main()
{
    struct node* root=newnode(1);
   root->left=newnode(2);
   root->right=newnode(3);
   root->left->left=newnode(4);
   root->left->right=newnode(5);
   root->right->left=newnode(6);
   root->right->right=newnode(7);

   printf("Preorder traversal of binary tree is: \n");
   printPostorder(root);









}