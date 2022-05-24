#include <iostream>
using namespace std;
// MID EXAM DSA --> find the total number of leaves in a BST
struct BSTNode
{
    int data;
    BSTNode *left;
    BSTNode *right;
};

BSTNode *root = NULL;

void inorderTraversal(BSTNode *root)
{
    if (root == NULL)
    {
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << endl;
    inorderTraversal(root->right);
}

// Create BST Node | Insertion in BST

void insert(int value)
{
    BSTNode *newNode = new BSTNode();
    newNode->data = value;
    newNode->right = NULL;
    newNode->left = NULL;

    if (root == NULL)
    {
        root = newNode;
    }
    else
    {
        BSTNode *p = root;
        BSTNode *temp = NULL;

        while (p != NULL)
        {

            if (p->data > value)
            {
                temp = p;
                p = p->left;
            }
            else if (p->data < value)
            {
                temp = p;
                p = p->right;
            }
        }

        p = newNode;
        if (temp->data > p->data)
        {
            temp->left = p;
        }
        else
        {
            temp->right = p;
        }
    }
}

static int counter;
int totalLeafNodes(BSTNode *root)
{
    if (!root)
    // root == NULL 
    {
        return counter;
    }
    totalLeafNodes(root->left);

    if (!root->left && !root->right)
    {
        counter++;
    }
    totalLeafNodes(root->right);
}
int main()
{
    insert(45);
    insert(98);
    insert(12);
    insert(3);
    insert(1);
    insert(67);
    // inorderTraversal(root);
    cout << totalLeafNodes(root) << endl;
    return 0;
}