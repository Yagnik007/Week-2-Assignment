#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

struct LinkedList {
    Node* head;
    LinkedList() { head = NULL; }

    void removeDuplicates()
    {
        unordered_set<int> s;
        struct Node* curr = head;
        struct Node* prev = NULL;
        while (curr != NULL)
        {
        if (s.find(curr->data) != s.end()) {
            prev->next = curr->next;
            delete (curr);
        }
        else {
            s.insert(curr->data);
            prev = curr;
        }
        curr = prev->next;
        }
    }

    void print()
    {
        struct Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout<<endl;
    }
 
    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};

int main()
{
    LinkedList l;
	int n;
    cout<<"Enter the size of list: ";
    cin>>n;
    cout<<"Enter the list: ";
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        l.push(x);
    }
    l.print();
    l.removeDuplicates();
    l.print();
}