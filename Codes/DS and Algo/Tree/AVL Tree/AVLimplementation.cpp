#include <iostream>
using namespace std;

// Structure for AVL Tree's Node
struct AVLNode
{

    int data;       // data for AVL node
    AVLNode *left;  // left child
    AVLNode *right; // right child

// Constructor
    AVLNode(int dota){
        data = dota;
        left = NULL;
        right = NULL;
    }
};

// Postorder Traversal in AVL Tree
void postorder(AVLNode *root){
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
// Preorder Traversal in AVL Tree
void preorder(AVLNode *root){
    if(root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// inorder Traversal in AVL Tree
void inorder(AVLNode *root){
    if(root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Height of AVL Tree

int height(AVLNode *root){
    if (!root)
        return 0;

    return max(height(root->left), height(root->right)) + 1;
}

int balanceFactor(AVLNode *root){
    if (!root)
        return 0;

    return height(root->left) - height(root->right);
}

// Maximum of two integers as a helper function for height
int max(int a, int b){
    return (a > b) ? a : b;
}

// Searching in AVL Tree
int search(AVLNode *root , int key){
    if(root == NULL){
        return 0;
    }
    else if(root->data == key){
        return 1;
    }
    else if(root->data > key){
        return search(root->right, key);
    }
    else if(root->data < key){
        return search(root->left, key);
    }

    return 1;
}

// Finding Minimum value of the AVL Tree
int minAVLNode(AVLNode *root){
    AVLNode *p = root;
    AVLNode *temp = NULL;

    while(p!=NULL){
        temp = p;
        p = p->left;
    }

    return temp->data;
}

// Finding Maximum value of the AVL Tree

int maxAVLNode(AVLNode *root){
    AVLNode *p = root;
    AVLNode *temp = NULL;

    while(p!=NULL){
        temp = p;
        p = p->right;
    }

    return temp->data;
}




int main()
{

    return 0;
}