#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void Traversal(Node *p)
{

    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}

Node *deleteFirstNode(Node *header)
{

    Node *p = header;
    header = header->next;
    delete p;

    return header;
}

void deleteAtPosition(Node *header, int position)
{
    Node *p = header;
    Node *q = header->next;
    int i = 1;
    while (i < position - 1)
    {
        p = p->next;
        q = q->next;
        i++;
    }

    p->next = q->next;
    delete q;
}
void deleteAtValue(Node *header, int value)
{
    Node *p = header;
    Node *q = header->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if (q->data == value)
    {
        p->next = q->next;
        delete q;
    }
    else
    {
        cout << "Element not found !" << endl;
    }
}

void deleteLastNode(Node *header)
{
    Node *p = header;
    Node *q = header->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    delete q;
}

int main()
{

    Node *first;
    Node *second;
    Node *third;
    Node *fourth;

    first = new Node;
    second = new Node;
    third = new Node;
    fourth = new Node;

    // Connecting first and second
    first->data = 10;
    first->next = second;

    // Connecting second and third
    second->data = 20;
    second->next = third;

    // Connecting third and fourth
    third->data = 30;
    third->next = fourth;

    fourth->data = 66;
    fourth->next = NULL;

    //

    // first = deleteFirstNode(first);
    // deleteLastNode(first);
    // deleteAtPosition(first,2);
    // deleteLastNode(first);
    deleteAtValue(first, 30);
    Traversal(first);

    return 0;
}