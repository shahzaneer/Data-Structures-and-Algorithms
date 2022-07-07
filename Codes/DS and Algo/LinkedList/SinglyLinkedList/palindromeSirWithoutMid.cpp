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

Node *Reverse(Node *head){
    Node *previous , *current , *newNext;
    previous = NULL;
    current = head;

    while(current!=NULL){
        newNext = current->next;
        current->next = previous;
        previous = current;
        current = newNext;
    } 
    return previous;
}

void Traversal(Node *head){

    Node *p = head;
    while(p!=NULL){
        cout<<p->data<<endl;
        p = p->next;

    }

}

bool isPalindrome(Node *head){
    Node *q = head;
    Node *p = head;

    while(p->next!=NULL){
        p = p->next;
    }

    while(q!=NULL){
        if(p->data!=q->data){
            return false;
        }
        else{
        p = p->next;
        q = q->next;
        }
    }

    return true;       
}




int main(){
    Node *head = NULL;
    head = insertAtLast(head,1);
    head = insertAtLast(head,2);
    head = insertAtLast(head,3);
    head = insertAtLast(head,2);
    head = insertAtLast(head,1);

    cout<<isPalindrome(head);
    
    return 0;
}