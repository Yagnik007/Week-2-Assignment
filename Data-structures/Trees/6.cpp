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

Node *findLCA(struct Node *root, int n1, int n2)
{

    if (root == NULL)
        return NULL;

    if (root->data == n1 || root->data == n2)
        return root;

    Node *left_lca = findLCA(root->left, n1, n2);
    Node *right_lca = findLCA(root->right, n1, n2);

    if (left_lca && right_lca)
        return root;

    return (left_lca != NULL) ? left_lca : right_lca;
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

    struct Node* lca = findLCA(root,root->left->right->data, root->right->left->data);
    cout<<"LCA("<<root->left->right->data<<","<<root->right->left->data<<") is: "<<lca->data<<endl;
    
    return 0;
}