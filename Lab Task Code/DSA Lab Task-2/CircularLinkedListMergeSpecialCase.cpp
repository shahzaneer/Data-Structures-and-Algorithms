#include <iostream>
using namespace std;
// Definition of Node
struct Node{
    int data;
    Node *next;
};
// Global pointers to the Circular linkedlists
Node *last1 = NULL;
Node *last2 = NULL;
Node *MergeLast = NULL;

// Functions prototype
Node* insertNode(Node *last, int value ,int list);
void display(Node *last , int list);
Node* merge(Node* last1 ,Node *last2);
Node* sortInDescendingOrder(Node* last);

int main(){

    return 0;
}

Node* insertNode(Node *last, int value ,int list){
    Node *newNode = new Node;
    cout<<"Enter Data of Node "<<endl;
    cin>>value;

    if(list == 1){
        last = last1;
    }
    else if (list == 2){
        last = last2;
    }

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

void display(Node *last , int list){
    if(list == 1){
        last = last1;
    }
    else if(list == 2){
        last = last2;
    }
    else if(list == 3){
        last = MergeLast;      
    }
    Node *p = last->next;
        do{
            cout<<p->data<<endl;
            p = p->next;
        }while(p!=last->next);   
}

Node* merge(Node *last1, Node *last2){
    // ager dono lists khali hon
    if(last1 == NULL && last2 == NULL){
        return MergeLast;
    }
    // ager list 1 khali ho
    if(last1 == NULL && last2!=NULL){
        MergeLast = last2;
        MergeLast->next = last2->next;
        return MergeLast;
    }
    // ager list 2 khali ho
    if(last2 == NULL && last1!=NULL){
        MergeLast = last1;
        MergeLast->next = last1->next;
        return MergeLast;
    }
    // ager dono lists non NULL hon.
    // sbse pehle dono ko sort krlena hai!
    last1 = sortInDescendingOrder(last1);
    last2 = sortInDescendingOrder(last2);

    Node *p = last1->next;

    

}

Node* sortInDescendingOrder(Node* last){
    // implemented selection sort !
    Node *p = last->next; //1st element 
    Node *q = last->next->next; //2nd element
    do{
        while(q!=last->next){
            if(p->data < q->data){
                // swap only data not the nodes 💫
                int temp;
                temp = p->data;
                p->data = q->data;
                q->data = temp;
            }
            q = q->next;
        }
        p = p->next;

    }while(p->next!=last->next);

    return last;
    
}
