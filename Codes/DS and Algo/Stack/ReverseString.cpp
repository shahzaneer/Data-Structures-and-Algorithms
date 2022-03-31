#include <iostream>
#include <string.h>
using namespace std;


struct stack{
    int size;
    int top = -1; //jb aik new stack initialize kia jayega tou stack main kuch nhi hoga!
    string *arr; //dynamic Array use krengay implement krne k liay tou yeh uske liay hai.
    // yeh base address hoga hmari array ka... 
    
};

int isEmpty(stack *s){
    // boolean function hai using primitive int in form of 0 and 1 -> the motivation for boolean data type.
    if(s->top<0){
        return 1;
        // 1 means  True
    }
    else{
        return 0;
        // 0 means False
    }
}
int isFull(stack *s){

    if(s->top == s->size-1){
    
        return 1;
    }
    else{
        return 0;
    }

}

void push(stack *s , char value){
    if(isFull(s) == 1){
        cout<<"The Stack is already filled"<<endl;
        return;
    }
    else{
    s->top++;
    s->arr[s->top] = value;
    }
}
string pop(stack *s){
    if(isEmpty(s) == 1){
        cout<<"The stack is already Empty"<<endl;
        return NULL; // NULL in the case of empty stack 
    }
    
    else{
    string poppedValue = s->arr[s->top];
    s->top--;
    return poppedValue;
    }
}


string reverseString(stack *s , string str){

    for(int i=0;i<str.length();i++){
        push(s,str[i]);
    }
    string revStr = "";
    while(!(isEmpty(s))){
        revStr+=pop(s);
    }

    return revStr;
    }


int main(){
    stack *s = new stack;
    s->size = 200; //setting max size for using this stack
    s->arr  = new string [200];
    string str = "Shahzaneer Ahmed is my Name!";
    // 10 are the actual letters and one is the special NULL character at the last.
    
    cout<<reverseString(s,str)<<endl;


    return 0;
}