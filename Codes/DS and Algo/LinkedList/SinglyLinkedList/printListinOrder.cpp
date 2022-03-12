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

Node *Mid(Node *head){
    Node *slow = head;
    Node *fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
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

void printInOrder(Node *head){
    Node *p = head; //head
    Node *m = Mid(head); // mid
    Node *q = Reverse(m); //last element
    // isse hamari mid se pehle wali linkedlist normal hai aur uske bad wali reversed.
    // aur teeno pointers hamaray pass reserved hain.
    

    while(q!=NULL){

        cout<<p->data<<endl;
        p = p->next;
        if(p->data!=q->data) //this if is jugaar :(
        cout<<q->data<<endl;
        q = q->next;
    
    }
        
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
    head = insertAtLast(head,2);
    head = insertAtLast(head,4);
    head = insertAtLast(head,6);
    head = insertAtLast(head,8);
    head = insertAtLast(head,10);
    head = insertAtLast(head,12);
    head = insertAtLast(head,14);
    

    // head = Reverse(head);
    // Traversal(head);
    printInOrder(head);





    
    return 0;
}