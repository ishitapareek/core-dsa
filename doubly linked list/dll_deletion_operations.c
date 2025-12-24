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

void deleteAtPosition(struct Node** head, int pos) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = *head;

    if (pos == 1) {   
        *head = temp->next;
        free(temp);
        return;
    }

    int count = 1;
    struct Node* prev = NULL;

    while (temp != NULL && count < pos) {
        prev = temp;
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        printf("Position does not exist. Cannot delete.\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
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

    printf("\nEnter the position of the node you want to delete: ");
    scanf("%d", &pos);
    deleteAtPosition(&head, pos);

    printf("\nList after deletion:\n");
    displayList(head);

    return 0;
}
