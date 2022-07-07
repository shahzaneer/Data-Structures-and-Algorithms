#include <iostream>
using namespace std;


int top = -1;

int isEmpty(){
    if(top<0){
        return 1;
    }
    return 0;
}
int isFull(char *stack , int size){
    if(size-1 == top){
        return 1;
    }
    return 0;
}

void push(char *stack , int size , char value){
    if(isFull(stack ,size) == 1){
        return;
    }
    top++;
    stack[top] = value;

}
char pop(char *stack){
    if(isEmpty() == 1){
        cout<<"Stack is already Empty\n";
        return ' ';
    }
    char poppedValue = stack[top];
    --top;
    return poppedValue;
}

int isPalindrome(char *stack, string str){
    for(int i=0;i<str.length();i++){
        push(stack,str.length(),str[i]);
    }

    for(int i=0;i<str.length();i++){
        if(pop(stack)!= str[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    cout<<"Enter you String \n";
    string str;
    cin>>str;
    int size = str.length();
    char stack[size+1];
    if(isPalindrome(stack,str) == 1){
        cout<<"Its a palindrome !"<<endl;
    }
    else{
        cout<<"Its not a Palindrome !"<<endl;
    }

    return 0;
}