#include <iostream>
using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node *prev;
    Node *next;
    Node(T val) : data(val), prev(nullptr), next(nullptr) {}
};

template <typename T>
class Deque
{
private:
    Node<T> *front;
    Node<T> *rear;
    int size;

public:
    Deque() : front(nullptr), rear(nullptr), size(0) {}

    bool isEmpty()
    {
        return size == 0;
    }

    int getSize()
    {
        return size;
    }

    void addFront(T item)
    {
        Node<T> *newNode = new Node<T>(item);
        if (isEmpty())
        {
            front = rear = newNode;
        }
        else
        {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
        size++;
    }

    void addRear(T item)
    {
        Node<T> *newNode = new Node<T>(item);
        if (isEmpty())
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            newNode->prev = rear;
            rear = newNode;
        }
        size++;
    }

    T removeFront()
    {
        if (isEmpty())
        {
            cerr << "Deque is empty" << endl;
            return T();
        }
        Node<T> *temp = front;
        T data = temp->data;
        if (front == rear)
        {
            front = rear = nullptr;
        }
        else
        {
            front = front->next;
            front->prev = nullptr;
        }
        delete temp;
        size--;
        return data;
    }

    T removeRear()
    {
        if (isEmpty())
        {
            cerr << "Deque is empty" << endl;
            return T();
        }
        Node<T> *temp = rear;
        T data = temp->data;
        if (front == rear)
        {
            front = rear = nullptr;
        }
        else
        {
            rear = rear->prev;
            rear->next = nullptr;
        }
        delete temp;
        size--;
        return data;
    }

    T peekFront()
    {
        if (isEmpty())
        {
            cerr << "Deque is empty" << endl;
            return T();
        }
        return front->data;
    }

    T peekRear()
    {
        if (isEmpty())
        {
            cerr << "Deque is empty" << endl;
            return T();
        }
        return rear->data;
    }
};

int main()
{
    Deque<int> deque;
    deque.addFront(1);
    deque.addFront(2);
    deque.addRear(3);
    cout << "Front element: " << deque.peekFront() << endl;
    cout << "Rear element: " << deque.peekRear() << endl;

    deque.removeFront();
    cout << "Front element after removal: " << deque.peekFront() << endl;

    deque.removeRear();
    cout << "Rear element after removal: " << deque.peekRear() << endl;

    return 0;
}