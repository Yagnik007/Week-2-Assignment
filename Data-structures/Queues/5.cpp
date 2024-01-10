#include <iostream>
#include <stack>
#include <climits>
using namespace std;

class MinStack {
private:
    stack<int> primaryStack;
    stack<int> minStack;
public:
    void push(int value) {
        primaryStack.push(value);
        if (minStack.empty() || value <= minStack.top()) {
            minStack.push(value);
        }
    }

    void pop() {
        if (primaryStack.empty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        if (primaryStack.top() == minStack.top()) {
            minStack.pop();
        }
        primaryStack.pop();
    }

    int top() {
        if (primaryStack.empty()) {
            cout << "Stack is empty." << endl;
            return INT_MIN;
        }
        return primaryStack.top();
    }

    int getMin() {
        if (minStack.empty()) {
            cout << "Stack is empty." << endl;
            return INT_MIN;
        }
        return minStack.top();
    }
};

int main() {
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    minStack.pop();
    return 0;
}
