#include <stdio.h>
#define MAX_SIZE 10000

int stack[MAX_SIZE];
int top = -1;

void push(int item) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack Overflow!\n");
        return;
    }
    stack[++top] = item;
}

int pop() {
    if (top < 0) {
        printf("Stack Underflow!\n");
        return -1;
    }
    return stack[top--];
}

int peek() {
    if (top < 0) {
        printf("Stack is empty!\n");
        return -1;
    }
    return stack[top];
}

int isEmpty() {
    return (top < 0);
}

int main() {
    push(5);
    push(10);
    push(15);

    printf("Top element: %d\n", peek());
    printf("Element popped: %d\n", pop());
    printf("Top element after pop: %d\n", peek());

    printf("Is the stack empty? %s\n", isEmpty() ? "Yes" : "No");

    return 0;
}
