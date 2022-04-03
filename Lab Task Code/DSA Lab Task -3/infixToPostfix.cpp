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
void display(char* arr){
    int i = 0;
    while(arr[i]!= '\0'){
        cout<<arr[i];
        i++;
    }
    cout<<endl;
}

int isOperator(char c){
    if(c=='+' || c == '-' || c=='/' || c=='*'){
        return 1;
    }
    return 0;
}

int precedence(char c){
    if(c == '*' || c== '/'){
        return 2;
    }
    if(c == '-' || c == '+'){
        return 1;
    }
    return 0;
}
char* infixToPostfix(string expression , stack *s){
    
    char *postfix = new char [expression.length()+1];
    int j = 0;//for postfix
    for(int i = 0; i<expression.length();i++){
        if(!isOperator(expression[i])){
            postfix[j] = expression[i];
            j++;
        }
        else{
            if(precedence(expression[i])>precedence(peek(s))){
                push(s,expression[i]);
            }
            else{
                char poppedCharacter = pop(s);
                postfix[j] = poppedCharacter;
                j++;
            }
        }
    }
// stack main mojud characters ko postfix main daalna hai!
    while(!isEmpty(s)){
        postfix[j] = pop(s);
        j++;
    }


    return postfix;
}

int main(){
    // Making Stack 
    stack *s = new stack;
    s->size = 200; 
    s->arr  = new char [s->size];
    cout<<"Enter you Expression \n";
    string expression;
    cin>>expression;
    char *postfix = infixToPostfix(expression,s);
    display(postfix);
    
    return 0;
}