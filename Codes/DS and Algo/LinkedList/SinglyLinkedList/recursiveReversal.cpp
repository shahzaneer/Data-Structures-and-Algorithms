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

Node* recursiveReverse(Node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node *newHead = recursiveReverse(head->next);
    // head ka hi next kyun lia ?? because hum first two elements ko reverse kr rhay hain 
    // bakii kaam recursive fate of action per chor dengay.
    // !it's fun when you get the logic but in real it's not fun at all!
    // A lot of practice needed
    // ab jb tk yeh last main nhi pohanch jata yani base condition main yeh call hota rahega.
    // jb return hoga head (jo new head hoga) tb aik aik kr k har call k liay body wala baki function execute hoga.
    head->next->next = head;
    head->next = NULL;
    return newHead; //har recursive call main newHead last Node hi hoga!

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

    head = recursiveReverse(head);
    Traversal(head);


    

    return 0;
}