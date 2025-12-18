// Write a C-program for creating a node structure that contains an integer and a pointer to a node structure.

#include <stdio.h>

struct Node {
    int number;
    struct Node *next;
};

int main() {
    struct Node n1, n2, n3;
    struct Node *head;

    n1.number = 10;
    n2.number = 20;
    n3.number = 30;

    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    struct Node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp -> number);
        temp = temp -> next;
    }

    printf("NULL");

    return 0;
}