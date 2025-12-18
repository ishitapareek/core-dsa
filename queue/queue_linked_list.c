// Write a C-program for implementing a queue data structure using linked list of size 6.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Queue {
    struct Node *front;
    struct Node *rear;
    int count;
    int capacity;
};

void enqueue(struct Queue *q, int value) {
    if (q->count == q->capacity) {
        printf("Queue Overflow! Cannot insert %d\n", value);
        return;
    }

    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (q->rear == NULL) {
        q->front = q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }

    q->count++;
    printf("%d inserted\n", value);
}

void dequeue(struct Queue *q) {
    if (q->count == 0) {
        printf("Queue Underflow! Nothing to remove\n");
        return;
    }

    struct Node *temp = q->front;
    printf("%d removed\n", temp->data);
    q->front = q->front->next;

    if (q->front == NULL)
        q->rear = NULL;

    free(temp);
    q->count--;
}

int main() {
    struct Queue q;
    q.front = NULL;
    q.rear = NULL;
    q.count = 0;
    q.capacity = 6;

    enqueue(&q, 5);
    enqueue(&q, 10);
    enqueue(&q, 15);
    enqueue(&q, 20);
    enqueue(&q, 25);
    enqueue(&q, 30);
    enqueue(&q, 35);

    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);

    return 0;
}