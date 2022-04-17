#include <iostream>
using namespace std;

// Node definition

struct Node
{
    // for a queue Node
    Node *next = NULL;
    int data;
};

// Global pointers for front and rear of a Queue

Node *front = NULL;
Node *rear = NULL;

// isEmpty
int isEmpty()
{
    if (front == NULL)
    {
        return 1;
    }
    return 0;
}

// isFull
int isFull(Node *newNode)
{
    
    // jo new Node banaya hai ager dynamically uski memory alot na hui tou NULL return hoga us case main full hojayegi queue
    // normally int data ko use krte huay hamari heap memory full nhi hogi.

    if (newNode == NULL)
    {
        return 1;
    }
    return 0;
}
// Enqueue Operation
void Enqueue(int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (isFull(newNode) == 1)
    {
        cout << "The queue is Full!" << endl;
        return;
    }
    else if (front == NULL)
    {
        front = rear = newNode;
        return;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}
// Dequeue operation
void Dequeue()
{
    if (isEmpty() == 1)
    {
        cout << "The queue is Empty !" << endl;
        return;
    }
    Node *ptr = front;
    front = front->next;
    ptr->next = NULL;
    int dequeuedValue;

    dequeuedValue = ptr->data;
    delete (ptr);
    cout << "The Dequeued Value is " << dequeuedValue << endl;
}
// Display
void display() {
    if(isEmpty() == 1){
        cout << "The queue is Empty " << endl;
        return;
    }
    // code for displaying of Queue
    Node *ptr = front;
    while(ptr!=NULL){
        cout<< ptr->data << endl;
        ptr = ptr->next;
    }
}

void getFront(){
    if(isEmpty() == 1){
        cout << "The queue is Empty " << endl;
        return;
    }
    cout <<"The Front value is "<< front->data << endl;
}

void getRear()
{
    if (isEmpty() == 1)
    {
        cout << "The queue is Empty " << endl;
        return;
    }
    cout << "The rear value is " << rear->data << endl;
}

int main()
{

    int option;
    do
    {
        cout << "--------------------------------------------------\n";
        cout << "Enter options to perform corresponding actions \n";
        cout << "1 - Enqueue\n"
             << "2 - DeQueue\n"
             << "3 - Display\n"
             << "4 - front\n"
             << "5- rear \n"
             << "-1 - Exit\n";
        cout << "--------------------------------------------------\n";

        cin >> option;
        switch (option)
        {
        case 1:
        {
            int val;
            cout << "Enter value \n";
            cin >> val;
            Enqueue(val);
            break;
        }

        case 2:
        {
            Dequeue();
            break;
        }

        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            getFront();
            break;
        }
        case 5:
        {
            getRear();
            break;
        }
        case -1:
        {
            cout << "exiting . . . \n";
            break;
        }
        }
    } while (option != -1);

    return 0;
}