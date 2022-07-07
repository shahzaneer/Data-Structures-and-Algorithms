//!---------------------------------------------------
//! Name :             Shahzaneer Ahmed              |
//! Registration No:   SP21-BCS-087                  |
//! Lab Assignment:    Singly-Linked-List            |
//!---------------------------------------------------

//? Assignment:
//* 1) Print Linked List in Reverse order (iterative & recursive)
//* 2) print linked list in such order that: print first and last node,
//* print second and second last node then print 3rd and 3rd last node and so on.....
//* 3) Check that the given linked list is palindrome or not
//* 4) Swap the values of any 2 given nodes like 2nd and 6th, 5th and 9th, 7th and 3rd etc

#include <iostream>
using namespace std;

// Singly linkedList's Node data Type definition
struct Node
{
    int data;
    Node *next;
};

// It is used for printing the linkedlist
void Traversal(Node *head)
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}

// It is used to add elements in the linkedlist
Node *insertAtLast(Node *head, int value)
{
    Node *newNode = new Node;
    Node *p = head;
    if (head == NULL)
    {
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = newNode;
    newNode->data = value;
    newNode->next = NULL;
    return head;
}

// * Reverse getting via recurison
void ReversePrint(Node *head)
{

    if (head == NULL)
    {
        return;
    }
    ReversePrint(head->next);
    cout << head->data << endl;
}
int countList(Node *head)
{
    int i = 0;
    if (head == NULL)
    {
        return 0;
    }
    while (head != NULL)
    {
        i++;
        head = head->next;
    }

    return i;
}
// * Swapping values of two nodes.
void swapTwoValues(Node *head, int pos1, int pos2)
{

    Node *f = head;
    Node *s = head;

    int i = 1, j = 1;
    while (i < pos1)
    {
        f = f->next;
        i++;
    }
    while (j < pos2)
    {
        s = s->next;
        j++;
    }

    // swapping logic
    int temp;
    temp = f->data;
    f->data = s->data;
    s->data = temp;
}

// * Reverse print the linkedlist
void reversePrintIteration(Node *head)
{
    Node *p = head;
    Node *q = head;
    Node *ptr = NULL;
    while (q->next != NULL)
    {
        q = q->next;
    }
    ptr = q;
    do
    {
        cout << ptr->data << endl;
        ptr = head;
        while (ptr->next != q)
        {
            ptr = ptr->next;
        }
        q = ptr;
    } while (ptr != p);
    cout << p->data << endl;
}

// * Printing in a specific manner
void printInSpecificOrder(Node *head)
{
    Node *p = head;
    Node *q = head;
    Node *ptr = NULL;

    while (q->next != NULL)
    {
        q = q->next;
    }
    ptr = q;
    do
    {
        cout << p->data << endl;
        cout << ptr->data << endl;
        ptr = head;
        while (ptr->next != q)
        {
            ptr = ptr->next;
        }
        q = ptr;
        p = p->next;
    } while (ptr->next != p);

    // in case we have odd number of nodes
    // if(countList(head)%2 == 1){
    //     cout<<p->data;
    // }
}

int isPalindrome(Node *head)
{
    Node *s = head;
    Node *p = head;
    Node *q = head;
    Node *ptr = NULL;
    while (q->next != NULL)
    {
        q = q->next;
    }

    ptr = q;
    do
    {
        if (s->data != ptr->data)
        {
            return 0;
        }
        s = s->next;
        ptr = head;
        while (ptr->next != q)
        {
            ptr = ptr->next;
        }
        q = ptr;
    } while (ptr != p);

    return 1;
}
int main()
{
    Node *head = NULL;
    head = insertAtLast(head, 1);
    head = insertAtLast(head, 45);
    head = insertAtLast(head, 45);
    // head = insertAtLast(head, 45);
    head = insertAtLast(head, 1);
    // head = insertAtLast(head,5);
    // head = insertAtLast(head,6);
    // head = insertAtLast(head,7);
    // head = insertAtLast(head,8);
    // head = insertAtLast(head,9);
    // printInOrder(head);
    // Traversal(head);
    // ReversePrint(head);

    // reversePrintIteration(head);
    // printInSpecificOrder(head);
    // Traversal(head);
    cout << isPalindrome(head);

    return 0;
}