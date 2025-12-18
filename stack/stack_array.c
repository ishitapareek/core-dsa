// Write a C-program for implementing a Stack data structure using array (dynamic memory allocation)

#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int *arr;
    int top;
    int capacity;
};

void push(struct Stack *s, int value) {
    if (s->top == s->capacity - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    s->top++;
    s->arr[s->top] = value;
    printf("%d pushed\n", value);
}

void pop(struct Stack *s) {
    if (s->top == -1) {
        printf("Stack Underflow! Nothing to pop\n");
        return;
    }
    printf("%d popped\n", s->arr[s->top]);
    s->top--;
}

int main() {
    struct Stack s;
    s.capacity = 5;
    s.arr = (int*)malloc(s.capacity * sizeof(int));
    s.top = -1;

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);
    push(&s, 50);
    push(&s, 60);

    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);

    free(s.arr);
    return 0;
}