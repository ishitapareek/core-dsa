// Write a C-program to add a node in the end of the linked list created in previous problem and this node should contain character ‘F’.

#include <stdio.h>

struct Node {
    char letter;
    struct Node *next;
};

int main() {
    struct Node n1, n2, n3, n4, n5, n6;
    struct Node *head;

    n1.letter = 'A';
    n2.letter = 'B';
    n3.letter = 'C';
    n4.letter = 'D';
    n5.letter = 'E';

    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = NULL;

    struct Node *temp = head;
    
    while (temp -> next != NULL) 
        temp = temp -> next;

    n6.letter = 'F';
    n6.next = NULL;
    temp -> next = &n6;

    temp = head;
    while (temp != NULL) {
        printf("%c -> ", temp -> letter);
        temp = temp -> next;
    }

    printf("NULL");

    return 0;
}