#include <iostream>
#include <string.h>
using namespace std;

// DEqueue
struct PizzaQueue
{
    int rear = -1;
    int front = -1;
    int size;
    int *orderNumber;
    string *orderedPizza;
};

PizzaQueue *q = NULL; // making of a global pointer

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

void placeOrderFromRear(string value, int orderNo)
{
    if (isFull() == 1)
    {
        cout << "We cannot place your Order! Kindly wait for the previous orders to be completed ! " << endl;
        return;
    }

    else if (isEmpty() == 1)
    {
        q->rear = q->front = 0;
        q->orderedPizza[q->rear] = value;
        q->orderNumber[q->rear] = orderNo;

        cout << "Your Order is placed with ID " << q->orderNumber[q->rear] << endl;
        cout << "The Ordered item is " << q->orderedPizza[q->rear] << endl;
    }

    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->orderedPizza[q->rear] = value;
        q->orderNumber[q->rear] = orderNo;

        cout << "Your Order is placed with ID " << q->orderNumber[q->rear] << endl;
        cout << "The Ordered item is " << q->orderedPizza[q->rear] << endl;
    }
}

void dequeueOrderFromFront()
{
    if (isEmpty() == 1)
    {
        cout << "There is no order in the Queue " << endl;
        return;
    }

    else if (q->rear == q->front)
    {
        cout << "The order completed is ID Number " << q->orderNumber[q->front] << endl;
        cout << "The order Completed is  " << q->orderedPizza[q->front] << endl;
        q->rear = q->front = -1;
    }
    else
    {
        cout << "The order completed is ID Number " << q->orderNumber[q->front] << endl;
        cout << "The order Completed is " << q->orderedPizza[q->front] << endl;
        q->front = (q->front + 1) % q->size;
    }
}

void placeOrderFromFront(string value, int orderNo)
{
    if (isFull() == 1)
    {
        cout << "We cannot place your Order! Kindly wait for the previous orders to be completed ! " << endl;
        return;
    }
    else if (isEmpty() == 1)
    {
        q->rear = q->front = 0;
        q->orderedPizza[q->rear] = value;
        q->orderNumber[q->rear] = orderNo;

        cout << "Your Order is placed with ID " << q->orderNumber[q->front] << endl;
        cout << "The Ordered item is " << q->orderedPizza[q->front] << endl;
    }

    else if (q->front == 0)
    {
        q->front = q->size - 1;
        q->orderedPizza[q->front] = value;
        q->orderNumber[q->front] = orderNo;

        cout << "Your Order is placed with ID " << q->orderNumber[q->rear] << endl;
        cout << "The Ordered item is " << q->orderedPizza[q->rear] << endl;
    }

    else
    {
        q->front--;
        q->orderedPizza[q->front] = value;
        q->orderNumber[q->front] = orderNo;

        cout << "Your Order is placed with ID " << q->orderNumber[q->rear] << endl;
        cout << "The Ordered item is " << q->orderedPizza[q->rear] << endl;
    }
}
void dequeueOrderFromRear()
{
    if (isEmpty() == 1)
    {
        cout << "There is no order in the Queue " << endl;
        return;
    }
    else if (q->front == q->rear)
    {
        cout << "The order completed is ID Number " << q->orderNumber[q->rear] << endl;
        cout << "The order Completed is  " << q->orderedPizza[q->rear] << endl;
        q->rear = q->front = -1;
    }
    else if (q->rear == 0)
    {
        cout << "The order completed is ID Number " << q->orderNumber[q->rear] << endl;
        cout << "The order Completed is  " << q->orderedPizza[q->rear] << endl;
        q->rear = q->size - 1;
    }
    else
    {
        cout << "The order completed is ID Number " << q->orderNumber[q->rear] << endl;
        cout << "The order Completed is  " << q->orderedPizza[q->rear] << endl;
        q->rear--;
    }
}

void display()
{
    if (isEmpty() == 1)
    {
        cout << "There is no order in the queue!" << endl;
        return;
    }
    else
    {
        //  in case of printing
        int i = q->front;
        while (i != q->rear)
        {
            if (q->orderedPizza[i] != "")
            {
                cout << "ID Number : " << q->orderNumber[i] << endl;
                cout << "Ordered Item :  " << q->orderedPizza[i] << endl;
            }
            i = (i + 1) % q->size;
        }

        cout << "ID Number : " << q->orderNumber[q->rear] << endl;
        cout << "Ordered Item :  " << q->orderedPizza[q->rear] << endl;
    }
}

void CurrentOrder()
{
    if (isEmpty() == 1)
    {
        cout << "There is no Order in the queue !" << endl;
        return;
    }

    // front element
    cout << "The Current Order ID is " << q->orderNumber[q->front] << endl;
    cout << "The Current Order is " << q->orderedPizza[q->front] << endl;
}

void latestOrder()
{
    if (isEmpty() == 1)
    {
        cout << "There is no Order in the Queue " << endl;
        return;
    }

    // rear element
    cout << "The Current Order ID is " << q->orderNumber[q->rear] << endl;
    cout << "The Latest order is " << q->orderedPizza[q->rear] << endl;
}

int main()
{
    q = new PizzaQueue; // DMA things
    int size;
    cout << "State the number of Orders \n";
    cin >> size;
    q->size = size;
    q->orderedPizza = new string[q->size];
    q->orderNumber = new int[q->size];

    for (int i = 0; i < size; i++)
    {
        q->orderedPizza[i] = "";
    }
    int orderID = 0;
    int option;

    do
    {
        cout << "--------------------------------------------------\n";
        cout << "Enter options to perform corresponding actions \n";

        cout << "1 -  Place Order from Rear\n"
             << "2 -  Complete Order From Front\n"
             << "3 -  Place Order From Front \n "
             << "4 -  Complete Order From Rear \n"
             << "5 -  Display\n"
             << "6 -  Current Order\n"
             << "7-   Latest order\n"
             << "-1 - Exit\n";
        cout << "--------------------------------------------------\n";

        cin >> option;
        switch (option)
        {
        case 1:
        {
            int val;
            cout << "Menu : \n"
                 << "0) Chicken Fajita \n"
                 << "1) Chicken Tikka \n"
                 << "2) Cheese Lover \n"
                 << "3) Barbeque Special \n"
                 << "4) Seekh Kabab Pizza \n"
                 << "5) Super Italian \n ";

            cout << "Enter value \n";
            string pizzaList[6] = {"Chicken Fajita", "Chicken Tikka", "Cheese Lover", "Barbeque Special", "Seekh Kabab Pizza", "Super Italian"};

            cin >> val;
            if (val >= 0 && val <= 5)
            {
                placeOrderFromRear(pizzaList[val], ++orderID);
                break;
            }
            else
            {
                continue;
            }
        }

        case 2:
        {
            dequeueOrderFromFront();
            break;
        }

        case 3:
        {
            int val;
            cout << "Menu : \n"
                 << "0) Chicken Fajita \n"
                 << "1) Chicken Tikka \n"
                 << "2) Cheese Lover \n"
                 << "3) Barbeque Special \n"
                 << "4) Seekh Kabab Pizza \n"
                 << "5) Super Italian \n ";

            cout << "Enter value \n";
            string pizzaList[6] = {"Chicken Fajita", "Chicken Tikka", "Cheese Lover", "Barbeque Special", "Seekh Kabab Pizza", "Super Italian"};

            cin >> val;
            if (val >= 0 && val <= 5)
            {
                placeOrderFromFront(pizzaList[val], ++orderID);
                break;
            }
            else
            {
                continue;
            }

            break;
        }
        case 4:
        {
            dequeueOrderFromRear();
            break;
        }
        case 5:
        {
            display();
            break;
        }
        case 6:
        {
            CurrentOrder();
            break;
        }
        case 7:
        {
            latestOrder();
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
