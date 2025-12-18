// Write a C-program to create a doubly linked list of nodes containing all characters
// of your name.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    struct Node *prev;
    char letter;
    struct Node *next;
};

struct Node* createNode(char letter) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> letter = letter;
    newNode -> prev = NULL;
    newNode -> next = NULL;

    return newNode;
}

void display(struct Node *head) {
    struct Node *temp = head;

    while (temp != NULL) {
        printf("%c ", temp -> letter);
        temp = temp -> next;
    }

    printf("\n");
}

void displayBack(struct Node *tail) {
    struct Node *temp = tail;

    while (temp != NULL) {
        printf("%c ", temp -> letter);
        temp = temp -> prev;
    }
}

int main() {
    char name[] = "Ishita";

    struct Node *head = NULL, *tail = NULL, *temp = NULL;

    for (int i = 0; i < 6; i++) {
        struct Node *newNode = createNode(name[i]);

        if (head == NULL){
            head = newNode;
            tail = newNode;
        }

        else {
            tail -> next = newNode;
            newNode -> prev = tail;
            tail = newNode;
        }
    }

    display(head);
    displayBack(tail);

    return 0;
}  