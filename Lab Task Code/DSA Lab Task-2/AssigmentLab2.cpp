
//? Assignment:
//* 1) Print Linked List in Reverse order (iterative & recursive)
// 2) print linked list in such order that: print first and last node,
// print second and second last node then print 3rd and 3rd last node and so on.....
// 3) Check that the given linked list is palindrome or not
// 4) Swap the values of any 2 given nodes like 2nd and 6th, 5th and 9th, 7th and 3rd etc

#include <iostream>
using namespace std;

struct Node
{
    // Singly linkedList's Node data Type definition
    int data;
    Node *next;
};

void Traversal(Node *head)
{
    while (head != NULL)
    {
        // jese hi head null hoga mtlb k aagay koi element mojud nhi hai!
        cout << head->data << endl;
        head = head->next;
    }
}
void insertAtEnd(Node *head, int value)
{
    Node *newNode = new Node;
    Node *ModifiedHead = head;

    while (ModifiedHead->next != NULL)
    {
        ModifiedHead = ModifiedHead->next;
    }
    ModifiedHead->next = newNode;
    newNode->data = value;
    newNode->next = NULL;
}


Node* reverseOrderTraversal(Node *head){
    Node *current, *prev , *newNext;
    prev = NULL;
    current = head;

    while(current!=NULL){
        newNext = current->next;
        // cout<<"A"<<endl;
        current->next = prev;
        // cout<<"B"<<endl;
        prev = current;
        // cout<<"C"<<endl;
        current = newNext;
        // cout<<"D"<<endl;

    }

// we have to return previous because jb tk current main null ayega tb tk previous last node per hoga jisse hamain printing shuru krni hai.
    return prev;
}

//* LinkedList in Reverse Order (iterative)
//* LinkedList in Reverse Order (recursive)
//* Palindrome Checking
// * Swapping values of two nodes.

int main()
{
    //* Manually Making a linkedlist of 4 Elements thorugh DMA

    Node *first = new Node;
    Node *second = new Node;
    Node *third = new Node;
    Node *fourth = new Node;

    // Connecting first and second
    first->data = 10;
    first->next = second;

    // Connecting second and third
    second->data = 20;
    second->next = third;

    // Connecting third and fourth
    third->data = 30;
    third->next = fourth;

    // Terminating the linkedlist on the fourth Node
    fourth->data = 66;
    fourth->next = NULL;

    // Normal traversal
    // Traversal(first);

    
    Node *head = first;

    // adding further Nodes in the linkedlist
    insertAtEnd(head,12);
    insertAtEnd(head,44);
    insertAtEnd(head,33);
    insertAtEnd(head,11);
    insertAtEnd(head,22);
    // Traversal(head);
    // head =  reverseOrderTraversal(first);
    // Traversal(head);

    
    

    return 0;
}