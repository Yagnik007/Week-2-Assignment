
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

int heightOfBinaryTree(Node* root)
{
    if(root == nullptr) return 0;
    return max(heightOfBinaryTree(root -> left),heightOfBinaryTree(root -> right))+1;
}

bool BalancedBinaryTree(Node* root)
{
    if(root == nullptr) return true;
    int lh = heightOfBinaryTree(root -> left);
    int rh = heightOfBinaryTree(root -> right);
    if((abs(lh - rh) <= 1) and  (BalancedBinaryTree(root -> left) and BalancedBinaryTree(root -> right))) return true;
    return false;
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
    if(BalancedBinaryTree(root))
    {
        cout<<"This is a balanced binary tree";
    }
    else cout<<"This is not a balanced binary tree";
    return 0;
}