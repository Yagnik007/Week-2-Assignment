#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* newNode(int data)
{
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
 
void push(Node** head_ref, int new_data){
    Node* new_node = newNode(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

Node* sumOfLinkedlist(Node*x , Node*y){
  int n=0,m=0;
   while(x->next!=NULL){
     n +=x->data;
     n*=10;
     x=x->next;
   }
   n+=x->data;
   while(y->next!=NULL){
     m +=y->data;
     m*=10;
     y=y->next;
   }
   m+=y->data;
   int num3=n+m;
   Node* temp=NULL;
   while(num3!=0){
     int last=num3%10;
     push(&temp,last);
     num3=num3/10;
   }
   return temp;
}

void printList(Node* n){
    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

int main()
{
    Node* newNode;
 
    Node* head1 = new Node();
    head1->data = 1;
 
    Node* head2 = new Node();
    head2->data = 3;
 
    newNode = new Node();
    newNode->data = 0;
    head2->next = newNode;
 
    newNode = new Node();
    newNode->data = 5;
    head2->next->next = newNode;
 
    newNode = new Node();
    newNode->data = 9;
    head1->next = newNode;
    head2->next->next->next = newNode;
 
    newNode = new Node();
    newNode->data = 3;
    head1->next->next = newNode;
 
    head1->next->next->next = NULL;
    
    Node* ans = sumOfLinkedlist(head1,head2);
    printList(head1);
    printList(head2);
    printList(ans);
}