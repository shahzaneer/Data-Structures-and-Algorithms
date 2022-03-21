#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node* insertAtEnd(Node *last, int value){
    Node *newNode = new Node;
    if(last == NULL){
        // case 1 : if there is no Node in the linkedlist.
        newNode->data = value;
        newNode->next = newNode;
        return newNode;
    }
//  if there is atleast one node present in the linkedlist.
    else if(last->next != NULL){
        Node *current = last->next;
        last->next = newNode;
        newNode->data = value;
        newNode->next = current;
        return last->next;
    }
    return last->next;

}

void Traversal(Node *last){
    Node *p = last->next;
    do{
        cout<<p->data<<endl;
        p = p->next;
    }while(p!=last->next);
}

int main(){
    Node *last = NULL;
    last = insertAtEnd(last,1);
    last = insertAtEnd(last,2);
    last = insertAtEnd(last,3);
    last = insertAtEnd(last,4);
    last = insertAtEnd(last,5);
    last = insertAtEnd(last,6);
    Traversal(last);
    

    return 0;
}