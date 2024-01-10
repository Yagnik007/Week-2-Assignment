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
 
    bool detectACycle()
    {
        struct node* fast = head, *slow= head;
        while(fast -> next or fast -> next -> next)
        {
            if(fast == slow) return true;
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        return false;
    }
 
    void print()
    {
        struct Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
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

}