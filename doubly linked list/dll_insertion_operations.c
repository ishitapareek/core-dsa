// Write a C-program to add following nodes to the list:
// a. Your birthday (eg. 15 if its 15 Aug 1947) at the beginning of the list.
// b. Your birth month after third node of the list.
// c. Your birth year at the end of the list.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void displayList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

void insertInBetween(struct Node* head, int pos, int data) {
    struct Node* temp = head;
    int count = 1;

    while (temp != NULL && count < pos) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        printf("Position does not exist. Cannot insert.\n");
        return;
    }

    struct Node* newNode = createNode(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

int main() {
    struct Node* head = NULL;

    head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);

    insertAtBeginning(&head, 15);

    int pos;
    printf("Enter the position after which you want to insert your birth month: ");
    scanf("%d", &pos);
    insertInBetween(head, pos, 8);  

    insertAtEnd(&head, 2006);

    printf("\nList after insertions:\n");
    displayList(head);

    return 0;
}
