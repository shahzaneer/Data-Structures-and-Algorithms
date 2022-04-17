#include <iostream>
using namespace std;

struct LinearQueue
{
    int size;
    int front = -1;
    int rear = -1;
    int *arr;
};

LinearQueue *q = NULL;

// isEmpty
int isEmpty()
{
    if (q->front == -1 && q->rear == -1)
    {
        return 1;
    }
    return 0;
}
// isFull
int isFull()
{
    if (q->rear == q->size - 1)
    {
        return 1;
    }
    return 0;
}

// Insertion from rear
void enqueueFromRear(int value)
{
    if (isFull() == 1)
    {
        cout << "The Queue is Full!" << endl;
        return;
    }
    else if (isEmpty() == 1)
    {
        q->front = q->rear = 0;
        q->arr[q->rear] = value;
    }

    else
    {
        q->rear++;
        q->arr[q->rear] = value;
    }
}

// deletion from front
void dequeueFromFront()
{
    if (isEmpty() == 1)
    {
        cout << "The queue is Already Empty!" << endl;
        return;
    }
    else if (q->front == q->rear)
    {
        cout << "The Dequeued Value is " << q->arr[q->front] << endl;
        q->front = q->rear = -1;
    }
    else
    {
        cout << "The Dequeued Value is " << q->arr[q->front] << endl;
        q->front++;
    }
}

// insertion from front
void enqueueFromFront(int value)
{
    if (isFull() == 1)
    {
        cout << "The queue is full!" << endl;
        return;
    }
    else if (isEmpty() == 1)
    {
        q->rear = q->front = 0;
        q->arr[q->front] = value;
    }
    else
    {
        
    }
}

// deletion from rear
void dequeueFromRear() {}

// front element without deleting
void front()
{
    if (isEmpty() == 1)
    {
        cout << "The Queue is Empty!" << endl;
        return;
    }
    cout << "The Element at Front is " << q->arr[q->front] << endl;
}
// rear element without deleting
void rear()
{
    if (isEmpty() == 1)
    {
        cout << "The Queue is Empty!" << endl;
        return;
    }
    cout << "The Element at rear is " << q->arr[q->rear] << endl;
}
// display
void display()
{
    if (isEmpty() == 1)
    {
        cout << "The queue is empty!" << endl;
        return;
    }

    for (int i = q->front; i <= q->rear; i++)
    {
        cout << q->arr[i] << endl;
    }
}

int main()
{
    q = new LinearQueue; // DMA things
    int size;
    cout << "Enter the size of queue\n";
    cin >> size;
    q->size = size;
    q->arr = new int[q->size];
    int option;

    do
    {
        cout << "Enter options to perform corresponding actions \n";
        cout << "1 - Enqueue\n"
             << "2 - DeQueue\n"
             << "3 - Display\n"
             << "-1 - Exit\n"
             << "4 - front\n"
             << "5- rear \n";

        cin >> option;
        switch (option)
        {
        case 1:
        {
            int val;
            cout << "Enter value \n";
            cin >> val;
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
        case 4:
        {
            front();
            break;
        }
        case 5:
        {
            rear();
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