#include <iostream>
using namespace std;

struct BSTNode
{
    int data;
    BSTNode *left = NULL;
    BSTNode *right = NULL;
};

BSTNode *root = NULL;

void insert(int value)
{
    BSTNode *newNode = new BSTNode;
    newNode->data = value;

    if (root == NULL)
    {
        // for the insetion of the root node
        root = newNode;
    }
    // Else search to find the right place for the insertion
    else
    {
        BSTNode *temp = NULL;
        BSTNode *p = root;
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
                cout << "Duplicate values cannot be inserted " << endl;
                return;
            }
        }
        p = newNode;
        if (p->data < temp->data)
        {
            temp->left = p;
        }
        else
        {
            temp->right = p;
        }
    }
}

void inorderTraversal(BSTNode *root)
{
    if (!root)
    {
        // yani root interrogation yani NULL ki halat ko pohanch jaye tou return krdena
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << endl;
    inorderTraversal(root->right);
}

BSTNode *findMax(BSTNode *root)
{
    BSTNode *temp = root;
    BSTNode *p = NULL;
    while (temp != NULL)
    {
        p = temp;
        temp = temp->right;
    }

    return p;
}

BSTNode *deleteNode(BSTNode *root, int key)
{
    // firstly we have to search for the node which has to be deleted
    // then we will delete it accordingly
    // There are three main cases for the deletion
    // Node with 0 child -> simply delete the node
    // Node with 1 child -> make the Parent of node point to the child of node and delete node
    // Node with 2 childs-> findout the inorder predeccesor(The largest element in LST) or inorder successor (The smallest element oin the RST)
    // and copy the contents of to be deleted node and then delete the inorder predeccessor or inorder successor (which was used earlier)

    if (root == NULL)
    {
        return root;
    }
    else if (key < root->data)
    {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteNode(root->right, key);
    }
    else
    {
        BSTNode *temp = NULL;
        // It means that we have found our node to be deleted and now its the time to delete the node
        // case 1: 0 child
        if (!root->left && !root->right)
        {
            delete root;
            return NULL;
        }
        // case 2: 1 child
        else if (root->left == NULL)
        {
            root = temp;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL)
        {
            root = temp;
            root = root->left;
            delete temp;
        }
        else
        {
            temp = findMax(root->left);
            root->data = temp->data;
            root->left = deleteNode(root->left, temp->data);
        }
    }
    return root;
}

void preOrderTraversal(BSTNode *root){
    if(!root){
        return;
    }

    cout << root->data<< " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

static int counter = 0;
int searchBST(BSTNode *root , int key){
    bool found = false;
    if(root == NULL){
        return -1;
    }
    else if(root->data == key){
        found = true;
    }
    else if(root->data > key){
        counter++;
        return searchBST(root->left, key);
    }
    else{
        counter++;
        return searchBST(root->right, key);
    }

    if(found){
        return counter;
    }

    return -1;
    
}
int main()
{

    insert(45);
    insert(32);
    insert(12);
    insert(10);
    insert(8);
    insert(5);
    insert(1);
    insert(78);
    insert(70);
    insert(600);
    insert(800);

    // inorderTraversal(root);
    preOrderTraversal(root);

    cout << searchBST(root, 10);

    return 0;
}