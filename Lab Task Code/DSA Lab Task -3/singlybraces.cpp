#include <iostream>
#include <string.h>
using namespace std;


struct stack{
    int size;
    int top = -1; 
    char *arr; 
    
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
char pop(stack *s){
    if(isEmpty(s) == 1){
        cout<<"The stack is already Empty"<<endl;
        return ' '; // NULL in the case of empty stack 
    }
    
    else{
    char poppedValue = s->arr[s->top];
    s->top--;
    return poppedValue;
    }
}

int bracesMatching(stack *s , string expression){
    for(int i=0;i<expression.length();i++){
        if(expression[i] == '('){
            push(s,expression[i]);
        }
        if(expression[i] == ')' && isEmpty(s)!= 1){
            pop(s);
        }
    }
    if(isEmpty(s)) return 1;
    return 0;
}

int main(){
    // Making Stack 
    stack *s = new stack;
    s->size = 200; 
    s->arr  = new char [s->size];
    cout<<"Enter you Expression \n";
    string expression;
    cin>>expression;
    if(bracesMatching(s,expression) == 1){
        cout<<"Its a valid expression! \n"<<endl;
    }
    else{
        cout<<"Its a invalid statement! \n"<<endl;
    }

    return 0;
}