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

Node* DuplictesRemoval(Node* head){
    // Node *last = new Node;
    // while(last!=NULL){
    //     last = last->next;
    // }

    Node *p = head;
    


}
int main(){
    Node *head = NULL;
    head = insertAtLast(head,2);
    head = insertAtLast(head,3);
    head = insertAtLast(head,2);
    head = insertAtLast(head,4);
    head = insertAtLast(head,6);
    head = insertAtLast(head,7);
    head = insertAtLast(head,8);
    // head = insertAtLast(head,8);

    Node *head2 = NULL;
    Traversal(head2);
    

    
    return 0;
}