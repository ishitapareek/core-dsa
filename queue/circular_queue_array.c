// Write a C-program for implementing a queue data structure using circular array (dynamically allocating the memory) of size 5.

#include <stdio.h>
#include <stdlib.h>

struct Queue {
    int *arr;
    int front;
    int rear;
    int count;
    int capacity;
};

void enqueue(struct Queue *q, int value) {
    if (q->count == q->capacity) {
        printf("Queue Overflow! Cannot insert %d\n", value);
        return;
    }
    q->rear = (q->rear + 1) % q->capacity;
    q->arr[q->rear] = value;
    q->count++;
    printf("%d inserted\n", value); 
}

void dequeue(struct Queue *q) {
    if (q->count == 0) {
        printf("Queue Underflow! Nothing to remove\n");
        return;
    }
    printf("%d removed\n", q->arr[q->front]);
    q->front = (q->front + 1) % q->capacity;
    q->count--;
}

int main() {
    struct Queue q;
    q.capacity = 5;
    q.arr = (int*)malloc(q.capacity * sizeof(int));
    q.front = 0;
    q.rear = -1;
    q.count = 0;

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);
    enqueue(&q, 60);

    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);

    free(q.arr);
    return 0;
}
