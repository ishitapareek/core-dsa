// Write a function to add a node to the leftmost leave of the tree i.e. 4.

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

void addLeftMost(struct Node* root, int value) {
    while (root->left != NULL) {
        root = root->left;
    }
    root->left = createNode(value);
}

int main() {
    struct Node *root = createNode(10);

    root->left = createNode(6);
    root->right = createNode(18);

    root->left->left = createNode(4);
    root->left->right = createNode(8);

    root->right->left = createNode(15);
    root->right->right = createNode(21);

    printf("Original Tree (Preorder):\n");
    preorder(root);

    addLeftMost(root, 1);

    printf("\n\nAfter adding to leftmost leaf:\n");
    preorder(root);

    return 0;
}
