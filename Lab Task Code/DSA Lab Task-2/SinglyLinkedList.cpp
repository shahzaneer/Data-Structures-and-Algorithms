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
    p->next = NULL; 
    return p;
}
Node* insertAtFirstPlace(Node *head,int value){
    Node *newNode = new Node;
    newNode->data = value;    
    newNode->next = head;     

    return newNode;


}
void insertAtLastPlaceWithReference(Node *head,Node *tail,int value){
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
Node *deleteFirstNode(Node *header)
{

    Node *p = header;
    header = header->next;
    delete p;

    return header;
}
void deleteAtPosition(Node *header, int position)
{
    Node *p = header;
    Node *q = header->next;
    int i = 1;
    while (i < position - 1)
    {
        p = p->next;
        q = q->next;
        i++;
    }

    p->next = q->next;
    delete q;
}
void deleteAtValue(Node *header, int value)
{
    Node *p = header;
    Node *q = header->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if (q->data == value)
    {
        p->next = q->next;
        delete q;
    }
    else
    {
        cout << "Element not found !" << endl;
    }
}
void deleteLastNode(Node *header)
{
    Node *p = header;
    Node *q = header->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    delete q;
}

int main(){

//* Making a linkedlist of 4 Elements

    Node *first;
    Node *second;
    Node *third;
    Node *fourth;

    first = new Node;
    second = new Node;
    third = new Node;
    fourth = new Node;

    // Connecting first and second
    first->data = 10;
    first->next = second;

    // Connecting second and third
    second->data = 20;
    second->next = third;

    // Connecting third and fourth
    third->data = 30;
    third->next = fourth;

    fourth->data = 66;
    fourth->next = NULL;

    while (true)
    {
        int choice;
        cout<<"Enter your desired function \n";
        cin>>choice;

        if(choice==15) break;

        switch (choice)
        {
        case 0:
            insertAtFirstPlace();
            break;
        case 1:
            insertAtLastPlaceWithReference();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;                                        
        
        default:
        cout<<"Please Enter Appropriate Option !\n";
            break;
        }
    }
    


    return 0;
}