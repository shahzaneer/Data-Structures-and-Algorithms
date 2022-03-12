#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node* insertAtLast(Node *head , int value){
    Node *newNode = new Node;
    Node *p = head;

    if(head == NULL){
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = newNode;
    newNode->data = value;
    newNode->next = NULL;
    return head;
    
}


void Traversal(Node *head){
    Node *p = head;
    while(p!=NULL){
        cout<<p->data<<endl;
        p = p->next;
    }   
}
int main(){
    Node *head = NULL;
    

    return 0;
}