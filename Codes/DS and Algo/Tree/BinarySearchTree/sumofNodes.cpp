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
        // root Node insertion
        root = newNode;
    }
    else
    {
        BSTNode *p = root;
        BSTNode *temp = NULL;

        // Searching for where should the element be inserted
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
            else
            {
                cout << "Duplicate cannot be added " << endl;
                ;
                return;
            }
        }

        // now p is containting that null where we have to insert our newNode
        // so
        p = newNode;
        // also Temp is containing the parent of p . now to decide where it should be inserted
        // in left or right subtree again checking
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

int sumOfNodes(BSTNode *root){
    // Sum is basically traversal of any kind (inorder , postorder , preorder  and where we print the root value here we will increment the root value
    
    static int sum;
    if(!root)
        return sum;
    sumOfNodes(root->left);
    sum += root->data;
    sumOfNodes(root->right);

    return sum;
}

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    insert(9);
    insert(10);

    cout << "Sum is " << sumOfNodes(root) << endl;

    return 0;
}