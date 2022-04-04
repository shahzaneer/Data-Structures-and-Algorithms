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
char peek(stack *s){
    char peekElement = s->arr[s->top];
    return peekElement;
}

int isOperator(char c){
    if(c=='+' || c == '-' || c=='/' || c=='*'){
        return 1;
    }
    return 0;
}
int operation(int a, int b,char oper){
    
    if(oper == '+') return b+a;
    if(oper == '-') return b-a;
    if(oper == '/') return b/a;
    if(oper == '*') return b*a;
    return -1;
}
int evaluationPostfix(stack *s , string postfix){
    int result = 0;
    for(int i=0;i<postfix.length();i++){
        if(!isOperator(postfix[i])){
            push(s,postfix[i]);
        }

        else{
            char oper = postfix[i];
            int a = pop(s)-'0'; //by deleting ascii value of 0 from any character we get int of that character!
            int b = pop(s)-'0';
            
            //* neechay wala nhi chal rha! don't know why!
            // int a = (int) pop(s);
            // int b = (int) pop(s); 
            result = operation(a,b,oper);
            push(s,result);
        }
    }

    return peek(s);
}


int main(){
    // Making Stack 
    stack *s = new stack;
    s->size = 200; 
    s->arr  = new char [s->size];
    cout<<"Enter you Expression \n";
    string expression;
    cin>>expression;
    cout<<"The answer of expression is "<<evaluationPostfix(s,expression)<<endl;
    
    return 0;
}