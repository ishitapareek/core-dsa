// Write a C-program to create a binary tree with 7 nodes

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void preorder(struct Node* root) {
    if (root == NULL) return;

    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

int main() {
    struct Node *root = createNode(10);

    root->left = createNode(6);
    root->right = createNode(18);

    root->left->left = createNode(4);
    root->left->right = createNode(8);

    root->right->left = createNode(15);
    root->right->right = createNode(21);

    printf("Preorder traversal of the tree:\n");

    preorder(root);

    return 0;
}
