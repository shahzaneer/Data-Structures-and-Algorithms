#include <iostream>
using namespace std;


struct stack{
    int size;
    int top = -1; //jb aik new stack initialize kia jayega tou stack main kuch nhi hoga!
    int *arr; //dynamic Array use krengay implement krne k liay tou yeh uske liay hai.
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
        // s ka top ager s k size -1 k equal hoaye 
        // kyunkay size 0 se shuru hua hai.
        return 1;
    }
    else{
        return 0;
    }

    // ! this syntax is valid ager last main return statement na bhi lgao tou kaam chalta hai .
    //! ager apki if else structure main munasib tareekay se return statements hongi tou error nhi milega!
}

void push(stack *s , int value){
    if(isFull(s) == 1){
        cout<<"The Stack is already filled"<<endl;
    }
    else{
    s->top++;
    s->arr[s->top] = value;
    cout<<"The value is pushed successfully!"<<endl;
    }
}
void pop(stack *s){
    if(isEmpty(s) == 1){
        cout<<"The stack is already Empty"<<endl;
        return;
    }
    // delete (s->arr[s->top]); 
    //! delete krne se memory delete hoti hai hmne yeh nhi krna!
    else{
    int poppedValue = s->arr[s->top];
    cout<<"You popped out "<<poppedValue<<" from the stack !"<<endl;
    s->top--;
    }
}

void Traversal(stack *s){
    if(isEmpty(s)) {
        cout<<"There is no Element in this stack !"<<endl;
    return;
    }
    cout<<"The Stack Elements are :"<<endl;
    for(int i=s->top; i>=0;i--){
        cout<<s->arr[i]<<endl;
    }
}

int peek(stack *s){
    // Peek() is one of a stack operation that returns
    //  the value of the top most element of the 
    // stack without deleting that element from the stack.

    if(s->top<0){
        return -1;
    }
    else{
        return s->arr[s->top];
    }
}

int peekPosition(stack *s , int position){
    if(position<0 && position>s->top){
        return -1;
    }
    else{
        int i = 1;
        while(i!=position){
            s->top--;
            i++;
        }
        return s->arr[s->top];
    }
}
int main(){
    // stack s; //aik stack declare kia
    // s.size = 20;
    // s.arr = new int;
    // ager hum functions main s pass karen tou pass by value hoga jbke hamain pass by reference krna h isliay pointer to stack s lelengay.
    // stack *s;
    // s->size = 20;
    // s->arr = new int;

    //?  Making a Menu Driven program for this Stack

    cout<<"Enter the size of your stack: "<<endl;
    int sizeOfStack;
    cin>>sizeOfStack;
    stack *s = new stack; //Aik new Stack banaya gya hai dynamically
    s->size = sizeOfStack;
    // dynamic array main ap aik int bhi deskte ho aur aik int array bhi dono cases main pointer aik hi return houta hai. aur pointer arithmetic operations krta hai yahan.
    s->arr = new int[sizeOfStack]; //Us array jiske through implement kr rhay wo bhi dynamically banani hai

    int option = 0 , value;
    cout<<"Enter your Option to perform Actions :"<<endl;
    cout<<"1 for push , 2 for pop , 3 for Traversal , 4 for peek Element ,5 for peek at position, -1 for Exit "<<endl;

    do{
        cin>>option;
        switch (option)
        {
        case 1:{
            cout<<"Enter the value you want to push"<<endl;
            cin>>value;
            push(s,value);
            break;

        }
        case 2:{
            pop(s);
            break;
        }
        case 3:{
            Traversal(s);
            break;
        }
        case 4:{
            cout<<"The peek element is "<<peek(s)<<endl;
            break;
        }
        case 5:{
            int position;
            cout<<"Enter the position where you do want to find the peek element "<<endl;
            cin>>position;
            cout<<"The peek element at the position is "<<peekPosition(s,position)<<endl;
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