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


bool isBST(treeNode *root ,treeNode *min = NULL, treeNode *max = NULL){
    // Solve this question for a single node
    if (root == NULL){
        return true;
    }
    else if(min!=NULL && root->data <= min->data){
        return false;
    }
    else if(max!=NULL && root->data >= max->data){
        return false;
    }

    // NOW We will call this function for all the left subtrees and all the right sub trees

    bool leftSubtreeisBST = isBST(root->left, min, root);
    // Left subtree main call kia aur iska min bound tou min hi hoga lekin maximum bound current root hoga
    bool rightSubtreeisBST = isBST(root->right, root, max);
    // right subtree main call kia aur iska min bound root hogi aur max tou max hi hogi

    // Yani left main minimum aur right main maximum kuch bhi hoskti hai
    // left main hamay hamara upperbound root rkhna hai 
    // right main hamay hamara lowerbound root rkhna hai
    // ager dono hi true return hotay hain tou true return krdo werna false
    return leftSubtreeisBST && rightSubtreeisBST;
}



void inorderDisplay(treeNode *root)
{
    //! inorder ---> left ->root ->right

    if (root == NULL)
    {
        return;
    }
    inorderDisplay(root->left);
    cout << root->data << endl;
    inorderDisplay(root->right);
}
int main()
{

    treeNode *root = createTreeNode(15);
    treeNode *c1 = createTreeNode(6);
    treeNode *c2 = createTreeNode(21);
    treeNode *c3 = createTreeNode(4);
    treeNode *c4 = createTreeNode(7);
    treeNode *c5 = createTreeNode(6);

    // example of a BST
    //        15
    //       /  \
    //      6   21
    //     / \
    //    4   7

    // linking
    root->left = c1;
    root->right = c2;
    c1->left = c3;
    c1->right = c4;
    c2->left = NULL;
    c2->right = c5;

    // cout << "Inorder " << endl;
    inorderDisplay(root);

    cout << isBST(root) << endl;


    return 0;
}