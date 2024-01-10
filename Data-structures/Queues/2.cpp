#include <bits/stdc++.h>
using namespace std;

class Queue {
private:
    vector<int> elements;
    int i = 0,j = 0;

public:
    void push(int value) {
        elements.push_back(value);
        j++;
    }

    void reverseQueue()
    {
        reverse(elements.begin()+i, reverse.begin()+j);
    }

    void pop() {
        if (!isEmpty()) {
            i++;
        } else {
            cout << "Queue underflow. Cannot pop from an empty Queue." << endl;
        }
    }

    int front() const {
        if (!isEmpty()) {
            return elements[i];
        } else {
            cout << "Queue is empty." << endl;
            return -1;
        }
    }

    bool isEmpty() const {
        if(i == j) return 1;
        return 0;
    }

    int size() const {
        return j-i+1;
    }
};

int main()
{
    Queue q;
    int k;
    cout<<"Enter the pivot rotation: ";
    cin>>k;
    
}   