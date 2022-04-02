#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *previous;
};

Node *top = NULL;

int isEmpty(){
    if(top == NULL){
        return 1;
    }
    return 0;
}

int isFull(){
    Node *p = new Node; //heap main memory request kro
    if(p == NULL){
        // ager na ho tou mtlb stack full hogya hai

        return 1;
    }
    return 0;
}

Node *push(){
    if(isFull() == 1){
        cout<<"Stack overflow !\n";
        return top;

    }

    Node *newNode = new Node;
    cout<<"Enter the value\n";
    int value;
    cin>>value;
    newNode->data = value;

    if(isEmpty()==1){
        top = newNode;
        top->previous = NULL;
        top->next = NULL;
        return top;
    }
    else{
        Node* newt = top;
        newNode->previous = NULL;
        newNode->next = newt;
        top = newNode;
        return top;
    }
}

void pop(){
    if(isEmpty()==1){
        cout<<"The stack is already Empty \n";
        return;
    }
    if(top->next == NULL){
        cout<<"The popped Value is :"<<top->data<<endl;
        top = NULL;
    }
    // lifo k mutabiq pop bhi start main se hi krna hai.
    else if(top->next!=NULL){
    Node *p = top;
    top = top->next;
    top->previous = NULL;
    int poppedValue = p->data;
    p->next = NULL;
    p->previous = NULL;
    p = NULL;
    delete(p);
    cout<<"The popped value is :"<<poppedValue<<endl;
    }
    
}

void Display(Node *top){
    if(isEmpty() == 1){
        cout<<"The stack is Empty \n";
        return;
    }
    Node *p = top;
    while(p!=NULL){
        cout<<p->data<<endl;
        p = p->next;
    }

}

int main(){
    int option = 0;
    cout<<"Enter your Option to perform Actions :"<<endl;
    cout<<"1 for push , 2 for pop , 3 for Traversal , -1 for Exit "<<endl;

    do{
        cin>>option;
        switch (option)
        {
        case 1:{
            push();
            break;

        }
        case 2:{
            pop();
            break;
        }
        case 3:{
            Display(top);
            break;
        }
        
        case -1:{
            break;
        }
        default:
        cout<<"Enter the Correct Option Please !"<<endl;
            break;
        }
    }while(option!=-1);

    return 0;
}