
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

void breadthFirstSearch(struct Node *node)
{
    if (node == NULL)
        return;

    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}

int main()
{
    struct Node *root = new Node(5);
    root->left = new Node(2);
    root->right = new Node(10);
    root->left->left = new Node(1);
    root->left->right = new Node(4);
    root->right->right = new Node(12);
    root->right->left = new Node(9);

    cout << "\nInorder traversal of binary tree is \n";
    inorder(root);
    cout << "\n";
    return 0;
}