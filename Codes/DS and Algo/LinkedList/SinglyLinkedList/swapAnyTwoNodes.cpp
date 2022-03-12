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

void swapTwoValues(Node *head, int pos1 , int pos2){

    Node *f = head;
    Node *s = head;

    int i=1,j=1;
    while(i<pos1){
        f = f->next;
        i++;
    }
    while(j<pos2){
        s = s->next;
        j++;
    }

    // swapping logic
    int temp;
    temp = f->data;
    f->data = s->data;
    s->data = temp;
}
int main(){
    Node *head = NULL;
    head = insertAtLast(head,1);
    head = insertAtLast(head,2);
    head = insertAtLast(head,3);
    head = insertAtLast(head,4);
    head = insertAtLast(head,5);
    head = insertAtLast(head,6);
    head = insertAtLast(head,7);

    swapTwoValues(head,1,5);
    Traversal(head);




    return 0;
}