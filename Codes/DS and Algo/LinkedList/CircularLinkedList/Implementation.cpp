#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
// Inserting
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

Node* insertAtStart(Node *last , int value){
    Node *newNode = new Node;
    if(last == NULL){
        // is condition main mene == ki jageh = lgaya tha aur hazrat e Compiler  ne error dene ki bajaye
        // segmentation fault ka error dia 
        last = newNode;
        last->data = value;
        last->next = newNode;
        return newNode;
    }
    else if(last->next!=NULL){
        Node *p = last->next;

        newNode->next = last->next;
        last->next = newNode;
        newNode->data = value;
        return last;
    }

    return last;

}
// insertAtPosition();
// insertAfterPosition();
// insertBeforePosition();
// deleting
// deleteFromFirst();
// deleteFromLast();
// deleteAtPosition();
// deleteWithKey();

// Traversal
void normalTraversal(Node *last){
    Node *current = last->next;
    
    do{
        //TODO: Do while pehli baar chalega condition dekhay baghair!
        cout<<current->data<<endl;
        current = current->next;
    }while(current!=last->next);


// ! Alternative code for while loop
    // cout<<current->data<<endl;
    // current = current->next;
    // while(current!=last->next){
        
    //     cout<<current->data<<endl;
    //     current = current->next;
    // }


}
void twoWaysTraversal(Node *last){
    Node *current = last->next;
    do
    {
        cout<<current->next<<endl;
        current = current->next;
    } while (current!=last->next);

    // last = reverse(last);
    //  *current = last->next;
    // do
    // {
    //     cout<<current->next<<endl;
    //     current = current->next;
    // } while (current!=last->next);

    
}

// reverse Circular linkedlist
// Node* reverse(Node *last){
//     Node *p,*q ,*r;
//     p = last->next;
//     q = last->next->next;
//     r = last->next->next->next;
//     p->next = last;
//     while(r->next!=last){
//         q->next = p;
//         r->next = q;
//     }
//     return p;

// }

int main(){
Node *last = NULL;    
last = insertAtEnd(last,12); //if condition main jayega  yeh
last = insertAtEnd(last,14); //yahan se else 
last = insertAtEnd(last,16);
last = insertAtEnd(last,18);
last = insertAtStart(last,8);
last = insertAtEnd(last,77);
last = insertAtStart(last,1);

normalTraversal(last);
// twoWaysTraversal(last);
return 0;
}