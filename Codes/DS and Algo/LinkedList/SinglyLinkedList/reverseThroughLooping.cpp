#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};


Node* reverseLinkedList(Node *head){
    Node *previous,*current,*newNext;
    previous = NULL;
    current = head;

    while(current!=NULL){
        // yeh hai connecting
        newNext = current->next;
        current->next = previous;

        // yeh hai moving next
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
int main(){
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

    first = reverseLinkedList(first);
    Traversal(first);


    return 0;
}