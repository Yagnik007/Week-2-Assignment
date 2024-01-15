#include <stdio.h>
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int item) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue Overflow!\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    queue[++rear] = item;
}

int isEmpty() {
    return (front == -1 || front > rear);
}

int dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow!\n");
        return -1;
    }
    return queue[front++];
}

int peek() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return -1;
    }
    return queue[front];
}



int main() {
    enqueue(5);
    enqueue(10);
    enqueue(15);

    printf("Front element: %d\n", peek());
    printf("Element dequeued: %d\n", dequeue());
    printf("Front element after dequeue: %d\n", peek());

    printf("Is the queue empty? %s\n", isEmpty() ? "Yes" : "No");

    return 0;
}
