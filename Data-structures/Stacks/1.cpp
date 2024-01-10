#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> elements;

public:
    void push(int value) {
        elements.push_back(value);
    }

    void pop() {
        if (!isEmpty()) {
            elements.pop_back();
        } else {
            cout << "Stack underflow. Cannot pop from an empty stack." << endl;
        }
    }

    int top() const {
        if (!isEmpty()) {
            return elements.back();
        } else {
            cout << "Stack is empty." << endl;
            return -1;
        }
    }

    bool isEmpty() const {
        return elements.empty();
    }

    size_t size() const {
        return elements.size();
    }
};

int main()
{
    Stack s;
}