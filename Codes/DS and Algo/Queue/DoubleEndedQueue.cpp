#include <iostream>
using namespace std;

// DEqueue
struct DEQueue
{
    int rear = -1;
    int front = -1;
    int size;
    int *arr;
};

DEQueue *q = NULL; // making of a global pointer

int isFull()
{
    if (((q->rear + 1) % q->size) == q->front)
    {
        return 1;
    }
    return 0;
}

int isEmpty()
{
    if (q->rear == -1 && q->front == -1)
    {
        return 1;
    }
    return 0;
}

void enqueueFromRear(int value)
{
    if (isFull() == 1)
    {
        cout << "Queue is Full!" << endl;
        return;
    }

    else if (isEmpty() == 1)
    {
        q->rear = q->front = 0;
        q->arr[q->rear] = value;
    }

    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->arr[q->rear] = value;
    }
}

void dequeueFromFront()
{
    if (isEmpty() == 1)
    {
        cout << "The Queue is already empty!" << endl;
        return;
    }

    else if (q->rear == q->front)
    {
        cout << "The Dequeued Element is " << q->arr[q->front] << endl;
        q->rear = q->front = -1;
    }
    else
    {
        cout << "The Dequeued Element is " << q->arr[q->front] << endl;
        // now circular increment in the front index!
        q->front = (q->front + 1) % q->size;
    }
}

void enqueueFromFront(int value)
{
    if (isFull() == 1)
    {
        cout << "The Queue is full!" << endl;
        return;
    }
    else if (isEmpty() == 1)
    {
        q->front = q->rear = 0;
        q->arr[q->front] = value;
    }
    else if (q->front == 0)
    {
        q->front = q->size - 1;
        q->arr[q->front] = value;
    }

    else
    {
        q->front--;
        q->arr[q->front] = value;
    }
}

void dequeueFromRear()
{
    if (isEmpty() == 1)
    {
        cout << "The queue is already Empty " << endl;
        return;
    }
    else if (q->front == q->rear)
    {
        cout << "The Dequeued Element is " << q->arr[q->rear] << endl;
        q->front = q->rear = -1;
    }
    else if (q->rear == 0)
    {
        cout << "The Dequeued Element is " << q->arr[q->rear] << endl;
        q->rear = q->size - 1;
    }
    else
    {
        cout << "The Dequeued Element is " << q->arr[q->rear] << endl;
        q->rear--;
    }
}
void display()
{
    if (isEmpty() == 1)
    {
        cout << "The Queue is Empty " << endl;
        return;
    }
    //  in case of printing
    int i = q->front;
    while (i != q->rear)
    {
        cout << q->arr[i] << endl;
        i = (i + 1) % q->size;
    }
    cout << q->arr[q->rear] << endl;
}

void front()
{
    if (isEmpty() == 1)
    {
        cout << "The Queue is Already Empty " << endl;
        return;
    }

    // front element
    cout << "The front Element is " << q->arr[q->front] << endl;
}

void rear()
{
    if (isEmpty() == 1)
    {
        cout << "The Queue is Already Empty " << endl;
        return;
    }

    // rear element
    cout << "The rear Element is " << q->arr[q->rear] << endl;
}

int main()
{
    q = new DEQueue; // DMA things
    int size;
    cout << "Enter the size of queue\n";
    cin >> size;
    q->size = size;
    q->arr = new int[q->size];
    int option;

    do
    {
        cout << "--------------------------------------------------\n";
        cout << "Enter options to perform corresponding actions \n";
        cout << "1 - EnqueueFromRear\n"
             << "2 - DeQueueFromFront\n"
             << "3 - EnqueueFromFront\n"
             << "4 - DequeueFromRear\n"
             << "5 - Display\n"
             << "6 - front\n"
             << "7- rear \n"
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
            enqueueFromRear(val);
            break;
        }

        case 2:
        {
            dequeueFromFront();
            break;
        }

        case 3:
        {
            int val;
            cout << "Enter value \n";
            cin >> val;
            enqueueFromFront(val);
            break;
        }
        case 4:
        {
            dequeueFromRear();
            break;
        }
        case 5:
        {
            display();
            break;
        }
        case 6:
        {
            front();
            break;
        }
        case 7:
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
