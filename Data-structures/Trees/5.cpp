#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

bool identical(Node *root1, Node *root2)
{
    if(root1 == NULL and root2 == NULL) return 1;
    if((!root1 and root2) or (root1 and !root2)) return 0;
    if(root1->data != root2->data) return 0;
    return (identical(root1->left, root2->left) && identical(root1->right, root2->right));
}

int main()
{
    struct Node *root1 = new Node(5);
    root1->left = new Node(2);
    root1->right = new Node(10);
    root1->left->left = new Node(1);
    root1->left->right = new Node(4);
    // root1->right->right = new Node(12);
    // root1->right->left = new Node(9);

    struct Node *root2 = new Node(5);
    root2->left = new Node(2);
    root2->right = new Node(10);
    root2->left->left = new Node(1);
    root2->left->right = new Node(4);
    root2->right->right = new Node(12);
    root2->right->left = new Node(9);

    if(identical(root1, root2))
    {
        cout<<"Two trees are identical"<<endl;
    }
    else cout<<"Two trees are not identical"<<endl;
    return 0;
}