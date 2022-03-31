#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

// 7->8->9->10->NULl
// 7
// 8
// 9
// 10
// we have to follow lifo (the rule of stack)
// lifo -> last in first out. 
// hum insert at first krte hain. aur isse top bana dete hain for push
// ab pop k liay first out hoga yani top wala . .
//*  time complexity is O(1).
// ager push and pop last element per krna hota tou time complexity O(n) hoti.

Node *top = NULL; 

int isEmpty(){
    if(top == NULL){
        return 1;
    }
    return 0;
}
int isFull(){
    Node *p = new Node;
    // ager ab dynamically memory assign nhi horhi
    if(p == NULL){
        return 1;
    }
    return 0;

    }
Node* push(){
    if(isFull() == 1){
        cout<<"The stack is Full"<<endl;
        return top;
    }
    Node *newNode = new Node;
    cout<<"Enter data to push \n";
    int value;
    cin>>value;
    newNode->data = value;

    if(top == NULL){
        top = newNode;
        top->next = NULL;
        return top;
    }
    newNode->next = top;
    top = newNode;
    return top;
}    

void pop(){
    if(isEmpty()==1){
        cout<<"The stack is already Empty \n";
        return;
    }
    Node *p = top;
    top = top->next;
    int poppedValue = p->data;
    delete(p);
    cout<<"The Popped Value is "<<poppedValue<<endl;
}
void Traversal(Node *top){
    while(top!=NULL){
        cout<<top->data<<endl;
        top = top->next;
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
            top = push();
            break;

        }
        case 2:{
            pop();
            break;
        }
        case 3:{
            Traversal(top);
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