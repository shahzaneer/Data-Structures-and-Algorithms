#include <iostream>
using namespace std;

struct BSTNode{
    int data;
    BSTNode *left = NULL;
    BSTNode *right = NULL;
};

BSTNode *root = NULL;

void insert(int value){
    BSTNode *newNode = new BSTNode;
    newNode->data = value;

    if(root == NULL){
        // for the insetion of the root node
        root = newNode;
    }
    // Else search to find the right place for the insertion
    else{
        BSTNode *temp = NULL;
        BSTNode *p = root;
        while(p!= NULL){
            if(p->data > value){
                temp = p;
                p = p->left;
            }
            else{
                temp = p;
                p = p->right;
            }
        }
        p = newNode;
        if(p->data < temp->data){
            temp->left = p;
        }
        else{
            temp->right = p;
        }
    }
}

void inorderTraversal(BSTNode *root){
    if(!root){
        // yani root interrogation yani NULL ki halat ko pohanch jaye tou return krdena
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << endl;
    inorderTraversal(root->right);
}
int main(){

    insert(45);
    insert(32);
    insert(12);
    insert(10);
    insert(8);
    insert(5);
    insert(1);

    inorderTraversal(root);

    return 0;
}