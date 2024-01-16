#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

struct PriorityQueue {
    int *arr;
    int front, rear;
    unsigned capacity;
};

struct PriorityQueue *createPriorityQueue(unsigned capacity) {
    struct PriorityQueue *queue = (struct PriorityQueue *)malloc(sizeof(struct PriorityQueue));
    queue->capacity = capacity;
    queue->arr = (int *)malloc(queue->capacity * sizeof(int));
    queue->front = queue->rear = -1;
    return queue;
}

int isFull(struct PriorityQueue *queue) {
    return (queue->rear == queue->capacity - 1);
}

int isEmpty(struct PriorityQueue *queue) {
    return (queue->front == -1);
}

void enqueue(struct PriorityQueue *queue, int data) {
    if (isFull(queue)) {
        printf("Queue is full.\n");
        return;
    }

    if (isEmpty(queue)) {
        queue->arr[++queue->rear] = data;
        queue->front++;
    } else {
        int i;
        for (i = queue->rear; i >= 0; i--) {
            if (data > queue->arr[i]) {
                queue->arr[i + 1] = queue->arr[i];
            } else {
                break;
            }
        }
        queue->arr[i + 1] = data;
        queue->rear++;
    }
    printf("Enqueued element: %d\n", data);
}

int dequeue(struct PriorityQueue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return -1;
    }

    int data = queue->arr[queue->front];
    if (queue->front == queue->rear) {
        queue->front = queue->rear = -1;
    } else {
        queue->front++;
    }
    return data;
}

int main() {
    struct PriorityQueue *queue = createPriorityQueue(MAX_SIZE);

    enqueue(queue, 3);
    enqueue(queue, 6);
    enqueue(queue, 1);
    enqueue(queue, 8);
    enqueue(queue, 4);
    enqueue(queue, 9);

    printf("Dequeued element: %d\n", dequeue(queue));
    printf("Dequeued element: %d\n", dequeue(queue));

    free(queue->arr);
    free(queue);

    return 0;
}
