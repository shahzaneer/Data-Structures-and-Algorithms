#include <iostream>
using namespace std;


int top = -1;

int isEmpty(){
    if(top<=0){
        return 1;
    }
    return 0;
}
int isFull(int *stack , int size){
    if(size-1 == top){
        return 1;
    }
    return 0;
}

void push(int *stack , int size){
    if(isFull(stack ,size) == 1){
        cout<<"Stack is full!\n";
        return;
    }
    cout<<"Enter value to push \n"<<endl;
    int value;
    cin>>value;
    top++;
    stack[top] = value;
    cout<<"Value is pushed\n"<<endl;

}
void pop(int *stack){
    if(isEmpty() == 1){
        cout<<"Stack is already Empty\n";
        return;
    }
    int poppedValue = stack[top];
    cout<<"The popped value is "<<poppedValue<<endl;
    --top;
}

void display(int *stack){
    if(isEmpty()==1){
        cout<<"The stack is Empty \n";
        return;
    }
    for(int i = top;i>=0; i--){
        cout<<stack[i]<<endl;
    }
}


int main(){
    cout<<"Enter the size of Stack :"<<endl;
    int size;
    cin>>size;
    int stack [size]; //static Array as Stack.
    cout<<"Enter your Option to perform Actions :"<<endl;
    cout<<"1 for push , 2 for pop , 3 for Traversal , -1 for Exit "<<endl;
    int option;
    do{
        cin>>option;
        switch (option)
        {
        case 1:{
            push(stack,size);
            break;
            // Base Address of Stack:
            //* stack 
            //* &stack[0]

        }
        case 2:{
            pop(stack);
            break;
        }
        case 3:{
            display(stack);
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