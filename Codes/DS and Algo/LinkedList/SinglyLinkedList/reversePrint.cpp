#include <iostream>
using namespace std;
struct Node{
int data;
Node *next;
};

void reversePrint(Node *p){

    // here we have only printed it in reverse order
    // we have not reversed the original linkedlist
    if (p==NULL){
        return;
    }

    reversePrint(p->next); //jb tk yeh poori trh execute na hojaye printing nhi hogi.
    cout<<p->data<<endl;
}
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
    head = insertAtLast(head,12);
    head = insertAtLast(head,10);
    head = insertAtLast(head,8);
    head = insertAtLast(head,6);
    head = insertAtLast(head,4);
    head = insertAtLast(head,2);
    head = insertAtLast(head,0);

    reversePrint(head);


    
    return 0;
}