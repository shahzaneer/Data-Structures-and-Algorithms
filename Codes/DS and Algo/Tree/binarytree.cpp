#include <iostream>
using namespace std;

struct treeNode{
    int data;
    treeNode *left;
    treeNode *right;
};

treeNode *root = NULL;

treeNode* createTreeNode(int value){
    treeNode *p = new treeNode;
    p->data = value;
    p->left = NULL;
    p->right = NULL;
}
int main(){

    return 0;
}