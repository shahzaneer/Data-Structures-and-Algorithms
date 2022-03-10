#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node* createNode(int value){
    Node *p;
    p = new Node;
    p->data = value;
    p->next = NULL; //jb node banay tb wo kisi ko bhi point na kr rha ho.
    return p;
}

Node* insertAtFirstPlace(Node *head,int value){
    Node *newNode = new Node; //aik newNode create karo DMA se
    newNode->data = value;    //us newNode k data main value dedo 
    newNode->next = head;     //us newNode k next address main mojuda head ka address dedo

    return newNode; // is newNode k address ko return krdo ab yehi head hoga!.


}
void insertAtLastPlaceWithReference(Node *tail,int value){
    Node *newNode = new Node;
    tail->next = newNode;
    newNode->next = NULL;
    newNode->data = value;
    

}
void insertLastWithoutReference(Node *head,int value){
    Node *newNode = new Node;
    Node *ModifiedHead = head;

while(ModifiedHead->next!=NULL){
    ModifiedHead = ModifiedHead->next;
}
ModifiedHead->next = newNode;
newNode->data = value;
newNode->next = NULL;


}
void insertAtPosition(Node *head , int position , int value){
    Node *newNode = new Node;
    Node *p = head;
    int i = 1;

    while(i<position-1){
        p = p->next;
        i++;
    }
    newNode->data = value;
    newNode->next = p->next;
    p->next = newNode;
    
}
void insertBeforePosition(Node *head, int position ,int value){
    Node *newNode = new Node;
    Node *p = head;
    int i=1;

    while(i<position-2){
        p=p->next;
        i++;
    }

    newNode->next = p->next;
    newNode->data = value;
    p->next = newNode;
}
void insertAfterPosition(Node *head , int position , int value){
    Node *newNode = new Node;
    Node *p = head;
    int i = 1;

    while(i<position){
        p = p->next;
        i++;
    }
    newNode->data = value;
    newNode->next = p->next;
    p->next = newNode;
    

}
void Traversal(Node *p){
    while(p!=NULL){
        cout<<p->data<<endl;
        p = p->next;
    }
}


int main(){

    Node *first;
    Node *second;
    Node *third;
    first = new Node;
    second  = new Node;
    third = new Node;

    // Connecting first and second
    first->data = 10;
    first->next = second;
    // Connecting second and third
    second->data = 20;
    second->next = third;
    // Terminating on third one
    third->data = 30;
    third->next = NULL;

    // Node *newNode;
    // newNode = createNode(45);
    // cout<<newNode->data;

    // Traversal(first);
    // first = insertAtFirstPlace(first,5);
    // insertAtLastPlace(third,50);
    // insertLastWithoutReference(first,55);
    insertAtPosition(first,3,66);
    // insertBeforePosition(first,3,88);
    // insertAtPosition(first,2,88);
    // insertAfterPosition(first,2,77);

    Traversal(first);

    return 0;
}