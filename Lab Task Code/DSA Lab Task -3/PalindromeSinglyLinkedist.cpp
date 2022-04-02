#include <iostream>
using namespace std;

struct Node{
    char data;
    Node *next;
};

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
Node* push(char value){
    if(isFull() == 1){
        cout<<"The stack is Full"<<endl;
        return top;
    }
    Node *newNode = new Node;
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

char pop(){
    if(isEmpty()==1){
        cout<<"The stack is already Empty \n";
        return ' ';
    }
    Node *p = top;
    top = top->next;
    char poppedValue = p->data;
    delete(p);
    return poppedValue;
    // cout<<"The Popped Value is "<<poppedValue<<endl;
}

int isPalindrome(string str){
    for(int i=0;i<str.length();i++){
        top = push(str[i]);
    }
    for(int i=0;i<str.length();i++){
        if(pop()!=str[i]){
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