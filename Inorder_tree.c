#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

// Inorder ট্রাভার্সাল ফাংশন
void printInorder(struct node* root) {
    if (root == NULL) {
        return;
    }

    printInorder(root->left);
    printf("%d ", root->data);
    printInorder(root->right);
}

// নতুন নোড তৈরি করার ফাংশন
struct node* newnode(int value) {
    struct node* root = (struct node*)malloc(sizeof(struct node));
    root->data = value;
    root->left = NULL;
    root->right = NULL;
    return root;
}

int main() {
    struct node* root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->right->right = newnode(6);

    // Function call
    printf("Inorder traversal of binary tree is: \n");
    printInorder(root);

    return 0;
}
