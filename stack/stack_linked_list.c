// Write a C-program for implementing a Stack data structure using linked list of size 6.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Stack {
    struct Node *top;
    int count;
    int capacity;
};

void push(struct Stack *s, int value) {
    if (s->count == s->capacity) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }

    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = s->top;
    s->top = newNode;
    s->count++;
    printf("%d pushed\n", value);
}

void pop(struct Stack *s) {
    if (s->count == 0) {
        printf("Stack Underflow! Nothing to pop\n");
        return;
    }

    struct Node *temp = s->top;
    printf("%d popped\n", temp->data);
    s->top = s->top->next;
    free(temp);
    s->count--;
}

int main() {
    struct Stack s;
    s.top = NULL;
    s.count = 0;
    s.capacity = 6;

    push(&s, 5);
    push(&s, 10);
    push(&s, 15);
    push(&s, 20);
    push(&s, 25);
    push(&s, 30);
    push(&s, 35);

    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);

    return 0;
}