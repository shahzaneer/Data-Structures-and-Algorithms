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
Node* merge(Node* last1 ,Node *last2);
Node* sortInDescendingOrder(Node* last);

int main(){
    int option;
    do{
        cout<<"Enter corresponding option for performing specific Action\n"
            <<"1 - Insert Element in first list \n"
            <<"2 - Insert Element in Second list \n"
            <<"3 - Display list 1\n"
            <<"4 - Display list 2\n"
            <<"5 - Merge \n"
            <<"6 - Display Merged list \n"
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
            MergeLast =  merge(last1,last2);
            break;

        }
        

        case 6:
        {
            display(MergeLast,3);
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
        last2 = sortInDescendingOrder(last2);
        MergeLast = last2;
        MergeLast->next = last2->next;
        return MergeLast;
    }
    // ager list 2 khali ho
    if(last2 == NULL && last1!=NULL){
        last1 = sortInDescendingOrder(last1);
        MergeLast = last1;
        MergeLast->next = last1->next;
        return MergeLast;
    }
    // ager dono lists non NULL hon.
    // sbse pehle dono ko sort krlena hai!
    last1 = sortInDescendingOrder(last1);
    last2 = sortInDescendingOrder(last2);

    // circular se singly banaya hai 
    Node *singlyFirstFirst = last1->next;
    Node *singlySecondFirst = last2->next;
    last1->next = NULL;
    last2->next = NULL;

    Node *main  = NULL;
    Node *p = singlyFirstFirst;
    Node *q = singlySecondFirst;
    Node *current = singlySecondFirst;

    while(q!= NULL || p!= NULL){

        if(p!=NULL){
            main = p;
            p = p->next;
        }
        if(q!=NULL){
            main->next = q;
            q = q->next;
        }
        main = main->next;
    }
    // again Making circular
    q->next = singlyFirstFirst;
    return q;

    

}

Node* sortInDescendingOrder(Node* last){
    // implemented selection sort !
    Node *p = last->next; //1st element
    Node *q = last->next; //
    Node *k = last->next;
    do{
        do{
            if(p->data>q->data){
                int temp;
                temp = p->data;
                p->data = q->data;
                q->data = temp;
            }
            else{
                q = q->next;
            }
        }while(q!=k);
        q = last->next;
        p = p->next;

    }while(p!=last->next);

    return last;
    
}

