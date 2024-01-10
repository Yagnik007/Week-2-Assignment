#include <iostream>

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinaryTree
{
private:
    Node *root;

    Node *insertRecursive(Node *current, int value)
    {
        if (current == nullptr)
        {
            return new Node(value);
        }
        if (value < current->data)
        {
            current->left = insertRecursive(current->left, value);
        }
        else if (value > current->data)
        {
            current->right = insertRecursive(current->right, value);
        }

        return current;
    }

    void inorderTraversal(Node *node)
    {
        if (node != nullptr)
        {
            inorderTraversal(node->left);
            std::cout << node->data << " ";
            inorderTraversal(node->right);
        }
    }

public:
    BinaryTree() : root(nullptr) {}

    void insert(int value)
    {
        root = insertRecursive(root, value);
    }

    void inorder()
    {
        inorderTraversal(root);
        std::cout << std::endl;
    }
};

int main()
{
    BinaryTree tree;

    tree.insert(10);
    tree.insert(5);
    tree.insert(15);
    tree.insert(8);
    tree.insert(3);

    std::cout << "Inorder traversal: ";
    tree.inorder();

    return 0;
}
