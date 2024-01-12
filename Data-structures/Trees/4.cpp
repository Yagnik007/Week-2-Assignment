
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

void breadthFirstSearch(struct Node *root)
{
    if (root == NULL) return;
    queue<Node*> q;
    q.push(root);
    vector<vector<int>> a;
    while(q.size())
    {
        int n = q.size();
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            struct Node *temp = q.front();
            v.push_back(temp -> data);
            if(temp -> left) q.push(temp -> left);
            if(temp -> right) q.push(temp -> right);
            q.pop();
        }
        a.push_back(v);
    }
    for(auto x: a)
    {
        for(auto i: x)
        {
            cout<<i<<" ";
        }
    }
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

    cout <<"Level order traversal of binary tree is \n";
    breadthFirstSearch(root);
    return 0;
}