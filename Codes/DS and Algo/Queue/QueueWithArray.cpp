#include <iostream>
using namespace std;

struct Queue{
    int size;
    int f = -1; // for dequeue 
    int r = -1; // for enqueue
    int *arr;
};

Queue *q = NULL; //Global Scenezz

// ! The best function written is a function with zero Arguments!

int isFull(){
    if(q->r == q->size-1){
        return 1;
    }
    return 0;
}

int isEmpty(){
    if(q->f == q->r){
        // ager -1 -1 hon tou bhi aur ager deque krte krte f aur b equal hojayen tb bhi!
        q->f = q->r = -1;
        return 1;
    }
    return 0;
}

void enqueue(int value){
    if(isFull()){
        cout<<"Enqueue is not possible\n";
        return;
    }
//  logic for enqueue 
    q->r++;
    q->arr[q->r] = value;


}
int dequeue(){
    if(isEmpty()){
        cout<<"Queue is already Empty \n";
        return -100; // -100 means there is no dequeued value!
    }
    // logic for dequeue
    q->f++;
    int dequeuedElement = q->arr[q->f];
    return dequeuedElement;

}

void display(){
    if(isEmpty()){
        cout<<"The Queue is Empty !!"<<endl;
        return;
    }
    for(int i=q->f+1;i<=q->r;i++){
        cout<<q->arr[i]<<endl;
    }
}

int main(){
    q = new Queue; //DMA things
    int size;
    cout<<"Enter the size of queue\n";
    cin>>size;
    q->size = size; 
    q->arr = new int [q->size]; 
    int option; 

    do{
        cout<<"Enter options to perform corresponding actions \n";
        cout<<"1 - Enqueue\n"
            <<"2 - DeQueue\n"
            <<"3 - Display\n"
            <<"-1 - Exit\n";

        cin>>option;
        switch (option)
        {
        case 1:
        {
            int val;
            cout<<"Enter value \n";
            cin>>val;
            enqueue(val);
            break;

        }

        case 2:
        {
            dequeue();
            break;
        }

        case 3:
        {
            display();
            break;
        }
        case -1:
        {
            cout<<"exiting . . . \n";
            break;
        }
        }    
    }while(option!=-1);

    return 0;
}