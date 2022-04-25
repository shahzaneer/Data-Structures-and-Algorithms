#include <iostream>
using namespace std;

struct treeNode
{
    int data;
    treeNode *left;
    treeNode *right;
};

treeNode *root = NULL; // global pointer to root node

treeNode *createTreeNode(int value)
{
    treeNode *p = new treeNode;
    p->data = value;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void PreOrderDisplay(treeNode *root)
{
    //! Pre ---> root ->left ->right
    if (root == NULL)
    {
        return;
    }
    cout << root->data << endl;
    PreOrderDisplay(root->left);
    PreOrderDisplay(root->right);
}

void PostOrderDislay(treeNode *root)
{
    //! post ---> left -> right -> root
    if (root == NULL)
    {
        return;
    }
    PostOrderDislay(root->left);
    PostOrderDislay(root->right);
    cout << root->data << endl;
}

void inorderDisplay(treeNode *root)
{
    //! inorder ---> left ->root ->right

    if(root == NULL){
        return;
    }
    inorderDisplay(root->left);
    cout << root->data << endl;
    inorderDisplay(root->right);
}
int main()
{

    treeNode *root = createTreeNode(15);
    treeNode *c1 = createTreeNode(14);
    treeNode *c2 = createTreeNode(13);
    treeNode *c3 = createTreeNode(12);
    treeNode *c4 = createTreeNode(11);
    treeNode *c5 = createTreeNode(10);

    // linking
    root->left = c1;
    root->right = c2;
    c1->left = c3;
    c1->right = c4;
    c2->left = c5;
    c2->right = NULL;

    cout << "Pre order " << endl;
    PreOrderDisplay(root);
    cout << "Post order " << endl;
    PostOrderDislay(root);
    cout << "Inorder " << endl;
    inorderDisplay(root);

    return 0;
}