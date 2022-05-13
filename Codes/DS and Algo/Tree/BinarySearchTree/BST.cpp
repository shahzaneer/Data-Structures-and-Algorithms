#include <iostream>
using namespace std;

struct BSTNode{
    int data;
    BSTNode *left;
    BSTNode *right;
};

BSTNode *root = NULL;

void inorderTraversal(BSTNode *root){
    if(root == NULL){
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << endl;
    inorderTraversal(root->right);
}

// Create BST Node | Insertion in BST 

void insert(int value){
    // creation of a new Node
    BSTNode *newNode = new BSTNode();
    newNode->data = value;
    newNode->right = NULL;
    newNode->left = NULL;

    if(root == NULL){
        root = newNode;
    }
    else{
        BSTNode *p = root;
        BSTNode *temp = NULL;

        while(p!=NULL){
            if(p->data > value){
                temp = p;
                p = p->left;
            }
            else if (p->data < value){
                temp = p;
                p = p->right;
            }
        }

        // now p is containting that null where we have to insert our newNode
        // so
        p = newNode;
        // also Temp is containing the parent of p . now to decide where it should be inserted 
        // in left or right subtree again checking
        if(temp->data > p->data){
            temp->left = p;
        }
        else{
            temp->right = p;
        }


    }
}

int main(){
    insert(45);
    insert(98);
    insert(12);
    insert(3);
    insert(1);

    inorderTraversal(root);
    return 0;
}