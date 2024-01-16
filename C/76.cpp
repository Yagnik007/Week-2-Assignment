#include <iostream>
#include <vector>

class CircularQueue {
private:
    std::vector<int> arr;
    int size;
    int front, rear;

public:
    CircularQueue(int capacity) {
        size = capacity + 1; 
        arr.resize(size);
        front = rear = 0;
    }

    bool isEmpty() {
        return front == rear;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    void enqueue(int value) {
        if (isFull()) {
            std::cout << "Queue is full, cannot enqueue." << std::endl;
            return;
        }
        arr[rear] = value;
        rear = (rear + 1) % size;
    }

    int dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty, cannot dequeue." << std::endl;
            return -1;
        }
        int value = arr[front];
        front = (front + 1) % size;
        return value;
    }

    int peek() {
        if (isEmpty()) {
            std::cout << "Queue is empty, cannot peek." << std::endl;
            return -1;
        }
        return arr[front];
    }
};

int main() {
    CircularQueue cq(5); 

    cq.enqueue(1);
    cq.enqueue(2);
    cq.enqueue(3);

    std::cout << "Peek: " << cq.peek() << std::endl;

    std::cout << "Dequeue: " << cq.dequeue() << std::endl;
    std::cout << "Dequeue: " << cq.dequeue() << std::endl;

    cq.enqueue(4);
    cq.enqueue(5);
    cq.enqueue(6); 

    std::cout << "Peek: " << cq.peek() << std::endl;

    return 0;
}
