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

int maxValue(BSTNode *root)
{
    // the maximum value is the deepest right value in a BST
    BSTNode *temp = root;
    BSTNode *p = NULL;
    while (temp != NULL)
    {
        p = temp;
        temp = temp->right;
    }

    return p->data;
}

int minValue(BSTNode *root)
{
    // The minimum value is the deepest left value in a BST
    BSTNode *temp = root;
    BSTNode *p = NULL;
    while(temp!=NULL){
        p = temp;
        temp = temp->left;
    }

    return p->data;
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
    cout << maxValue(root)<<endl;
    cout << minValue(root)<<endl;

    return 0;
}