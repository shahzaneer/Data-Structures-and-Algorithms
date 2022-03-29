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
Node* insertNode(Node *last, int list);
void display(Node *last , int list);
void merge(Node* last1 ,Node *last2);
Node* sortInDescendingOrder(Node* last);

int main(){
    int option;
    do{
        cout<<"Enter corresponding option for performing specific Action\n"
            <<"1 - Insert Element in first list \n"
            <<"2 - Insert Element in Second list \n"
            <<"3 - Display list 1\n"
            <<"4 - Display list 2\n"
            <<"5 - Merged-List \n"
            <<"0 - Exit \n";

        cin>>option;
        switch (option)
        {
        case 1:
        {
            last1 = insertNode(last1,1);
            break;

        }
        

        case 2:
        {
            last2 = insertNode(last2,2);
            break;

        }
        

        case 3:
        {
            display(last1,1);
            break;

        }
        

        case 4:
        {
            display(last2,2);
            break;

        }
        

        case 5:
        {
            merge(last1,last2);
            break;

        }
        
        case 0:
        {
            cout<<"Exiting . . . . \n";
            break;

        } 
        
        default:
        {
            cout<<"please Enter Appropriate Option \n";
            break;

        }

        }    


    }while(option!=0);    
    return 0;
}

Node* insertNode(Node *last,int list){
    Node *newNode = new Node;
    int value;
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

    Node *p = last->next;
        do{
            cout<<p->data<<endl;
            p = p->next;
        }while(p!=last->next);   
}

void merge(Node *last1, Node *last2){
    if(last1 == NULL && last2 == NULL){
        cout<<"Both lists are Empty"<<endl;
    }
    // ager list 1 khali ho
    if(last1 == NULL && last2!=NULL){
        last2 = sortInDescendingOrder(last2);
        MergeLast = last2;
        display(MergeLast,2);
        
    }
    // ager list 2 khali ho
    if(last2 == NULL && last1!=NULL){
        last1 = sortInDescendingOrder(last1);
        MergeLast = last1;
        display(MergeLast,1);
    }
    // ager dono lists non NULL hon.
    // sbse pehle dono ko sort krlena hai!
    last1 = sortInDescendingOrder(last1);
    last2 = sortInDescendingOrder(last2);

    // circular se singly banaya hai 
    Node *singlyFirstFirst = last1->next;
    Node *singlySecondFirst = last2->next;
    last1->next = NULL;
    last2->next - NULL;

    Node *main  = NULL;
    Node *p = singlyFirstFirst;
    Node *q = singlySecondFirst;
    while(p!=NULL && q!=NULL){
        if(p!=NULL){
            cout<<p->data<<endl;
            p = p->next;
        }
        if(q!=NULL){
            cout<<q->data<<endl;
            q = q->next;
        }

    }


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
