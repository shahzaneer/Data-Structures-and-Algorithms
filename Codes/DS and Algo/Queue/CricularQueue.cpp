#include <iostream>
using namespace std;

// It is to mention that the queue is a linear data Structure we are visualizing it as a circular one
// but in reality its linear. //Bharosa rkhh bhai linear hi hai!😅

struct CircularQueue
{
    int rear = -1;
    int front = -1;
    int size;
    int *arr;
};

CircularQueue *q = NULL; // making of a global pointer

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

void enqueue(int value)
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

void dequeue()
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
    q = new CircularQueue; // DMA things
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
