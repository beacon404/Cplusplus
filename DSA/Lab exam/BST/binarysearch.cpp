#include <iostream>
using namespace std;

// Node class representing each node in the BST
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// BST class representing the Binary Search Tree
class BST
{
private:
    Node *root;

    // Helper function for inserting a new node in the BST
    Node *insert(Node *node, int data)
    {
        if (node == nullptr)
        {
            return new Node(data);
        }

        if (data < node->data)
        {
            node->left = insert(node->left, data);
        }
        else
        {
            node->right = insert(node->right, data);
        }
        return node;
    }

    // Helper function for searching a value in the BST
    bool search(Node *node, int data)
    {
        if (node == nullptr)
        {
            return false;
        }
        if (node->data == data)
        {
            return true;
        }
        if (data < node->data)
        {
            return search(node->left, data);
        }
        else
        {
            return search(node->right, data);
        }
    }

    // Helper function to delete the entire BST
    void destroyTree(Node *node)
    {
        if (node != nullptr)
        {
            destroyTree(node->left);
            destroyTree(node->right);
            delete node;
        }
    }

public:
    // Constructor initializes an empty BST
    BST() : root(nullptr) {}

    // Destructor deletes the entire BST
    ~BST()
    {
        destroyTree(root);
    }

    // Function to insert a new value in the BST
    void insert(int data)
    {
        root = insert(root, data);
    }

    // Function to search a value in the BST
    bool search(int data)
    {
        return search(root, data);
    }
};

int main()
{
    BST bst;
    bst.insert(5);
    bst.insert(3);
    bst.insert(7);
    bst.insert(2);
    bst.insert(4);
    bst.insert(6);
    bst.insert(8);

    int value;
    cout << "Enter value to search: ";
    cin >> value;

    if (bst.search(value))
    {
        cout << "Value " << value << " found in the BST." << endl;
    }
    else
    {
        cout << "Value " << value << " not found in the BST." << endl;
    }

    return 0;
}
