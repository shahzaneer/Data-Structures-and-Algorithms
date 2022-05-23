#include <iostream>
using namespace std;

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

void insert(int value)
{
    // creation of a new Node
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

int findRecursive(BSTNode *root, int key)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->data == key)
    {
        return 1;
    }
    if (root->data > key)
    {
        return findRecursive(root->left, key);
    }
    else if (root->data < key)
    {
        return findRecursive(root->right, key);
    }

    return 1;
}

int findIterative(int key)
{
    BSTNode *tempRoot = root;
    while (tempRoot != NULL)
    {
        if (key > tempRoot->data)
        {
            // cout << "Pakistan noor hai " << endl;
            tempRoot = tempRoot->right;
        }
        else if (key < tempRoot->data)
        {
            // cout << "Pakistan noor hai " << endl;
            tempRoot = tempRoot->left;
        }

//* Efficient way is write low number of lines with maximum readability
        // else
        //     return 1;

        if (key == tempRoot->data)
        {
            // cout << "aur noor ko zawal nhi! - Wasif ali wasif " << endl;
            return 1;
        }

    }
    // cout << "nhi mil rha bhai  " << endl;
    return 0;
}

int main()
{
    insert(45);
    insert(98);
    insert(12);
    insert(3);
    insert(1);

    // inorderTraversal(root) ;
    cout << findIterative(1);
    // cout << findRecursive(root, 45);
    return 0;
}