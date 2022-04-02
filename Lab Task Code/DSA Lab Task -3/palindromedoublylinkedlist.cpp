#include <iostream>
using namespace std;

struct Node{
    char data;
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

Node *push(char value){
    if(isFull() == 1){
        cout<<"Stack overflow !\n";
        return top;

    }

    Node *newNode = new Node;
    newNode->data = value;

    if(isEmpty()== 1){
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

char pop(){
    if(isEmpty()==1){
        cout<<"The stack is already Empty \n";
        return' ';
    }
    if(top->next == NULL){
        // cout<<"The popped Value is :"<<top->data<<endl;
        char value;
        value = top->data;
        top = NULL;
        return value;
    }
    // lifo k mutabiq pop bhi start main se hi krna hai.
    else if(top->next!=NULL){
    Node *p = top;
    top = top->next;
    top->previous = NULL;
    char poppedValue = p->data;
    p->next = NULL;
    p->previous = NULL;
    p = NULL;
    delete(p);
    // cout<<"The popped value is :"<<poppedValue<<endl;
    return poppedValue;
    }
    
    return ' ';
}

int isPalindrome(string str){
    for(int i=0;i<str.length();i++){
        top = push(str[i]);
    }
    for(int i = 0;i<str.length();i++){
        if(pop() != str[i]){
            return 0;
        }
    }
    return 1;
}


int main(){
    cout<<"Enter you String \n";
    string str;
    cin>>str;
    if(isPalindrome(str) == 1){
        cout<<"Its a palindrome !"<<endl;
    }
    else{
        cout<<"Its not a Palindrome !"<<endl;
    }

    return 0;
}