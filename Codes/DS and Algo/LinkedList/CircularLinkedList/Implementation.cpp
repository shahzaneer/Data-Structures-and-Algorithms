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
void insertAtPosition(Node *last ,int position,int value){
    if(last ==  NULL){
        cout<<"You cannot insert at this position"<<endl;
    }
    Node *newNode = new Node;
    Node *p = new Node;
    p = last->next;
    int i = 1;
    while(i!=position-1){
        p = p->next;
        i++;
    }

    Node *q = p->next;
    p->next = newNode;
    newNode->data = value;
    newNode->next = q;

}
void insertAfterPosition(Node *last , int position , int value){
    if(last == NULL){
        cout<<"";
    }
    Node *newNode = new Node;
    Node *p = last;
    int i = 1;
    while(i<position+1){
        p = p->next;
        i++;
    }
     Node *q = p->next;
    p->next = newNode;
    newNode->data = value;
    newNode->next = q;
}
Node* insertBeforePosition(Node *last , int position , int value){
    Node *newNode = new Node;
    if(last == NULL){
        cout<<"You cannot insert at this position"<<endl;
        // last = newNode;
        // newNode->next = newNode;
        // newNode->data = value;
        // return last;
    }
    else{
    Node *p = last;
    int i = 1;
    while(i!=position-2){
        p = p->next;
        i++;
    }
     Node *q = p->next;
    p->next = newNode;
    newNode->data = value;
    newNode->next = q;

    }

    return last;
}


// deleting
void deleteFromFirst(Node* last){
    Node *temp = last->next;
    Node *newFirst = last->next->next;
    last->next = newFirst;
    delete temp;
}


Node* deleteFromLast(Node *last){
    Node *p,*q;
    p = last->next;
    q = last;
    while(p->next!=last){
        p = p->next;
    }
    p->next = last->next;
    delete q;
    return p;

}
int countList(Node *last){
    int i = 1; //circular k case main pehle lelengay 1
    Node *p = last->next;

    while(p->next!=last->next){
        p = p->next;
        i++;
    }

    return i;
}
void deleteAtPosition(Node *last,int position){
    if(position<=0 && position>=countList(last)){
        cout<<"You cannot delete at this position"<<endl;
    }
    else{
        Node *p = last->next;
        int i=1;
        while(i!=position-1){
            p = p->next;
            i++;
        }
        Node *q = p->next;
        p->next = q->next;
        delete(q);
    }


}

Node* deleteWithKey(Node *last , int key){
    if(last->data == key){
        // delete at end logic;
        Node *q = last;
        Node *p = last->next;
        while(p->next!=last){
            p = p->next;
        }
        p->next = last->next;
        delete q;
        return p;
    }
    else if(last->next->data == key){
        // delete at start logic
        Node *q = last->next;
        Node *p = last ->next->next;
        last->next = p;
        delete(q);
        return p;
    }
    
    // delete at oter searching place
    Node
    
    

}


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
// last = insertAtEnd(last,12); //if condition main jayega  yeh
// last = insertAtEnd(last,14); //yahan se else 
// last = insertAtEnd(last,16);
// last = insertAtEnd(last,18);
// last = insertAtStart(last,8);
// last = insertAtEnd(last,77);
// last = insertAtStart(last,1);
// insertAtPosition(last,3,55);
// insertAfterPosition(last,2,66);
// insertAfterPosition(last,4,66);
// insertBeforePosition(last,3,22);


last = insertAtEnd(last,66);
last = insertAtEnd(last,77);
last = insertAtEnd(last,88);
last = insertAtEnd(last,99);
last = insertAtEnd(last,101);

// cout<<countList(last)<<endl;
deleteAtPosition(last, 3);
normalTraversal(last);
// deleteFromFirst(last);
// last = deleteFromLast(last);
// normalTraversal(last);
// twoWaysTraversal(last);
return 0;
}