#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

//! Palindrome --> 1221 1223221 type k arrays, strings ya linkedlist (linear data structures) jinhe ulta krne , reverse krne se bhi original DS milay
//! Palindrome hain. 
// by knowing the reverse process of reversing hum aik new string ,array , ya linkedlist bana kr 
// bht asaaani se yeh question solver krskte hain lekin usmay O(n) times complexity zyada hogi
// we have to do it in O(1) that is in constant time.

// we will firstly reverse the linkedlist after the mid and then compare the both strings.
// mid find krne k liay 
//* Hare and tortoise Algo use karengay (slow and fast pointers to find mid)



Node* Mid(Node *head){
    Node *slow = head;
    Node *fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

Node* reverseLinkedList(Node *head){
    Node *previous,*current,*newNext;
    previous = NULL;
    current = head;

    while(current!=NULL){
        // yeh hai connecting
        newNext = current->next;
        current->next = previous;

        // yeh hai moving next
        previous = current;
        current = newNext;
    }

    return previous;

}

bool isPalindrome(Node *head){
    // hamain teen pointers chahiay 
    // pehla current dusra mid teesra last
    Node *current = head;
    Node *mid = Mid(head);
    Node *last = reverseLinkedList(mid->next);

    while (last!=NULL)
    {
        if(current->data!= last->data){
            return false;
        }
        else{
            current = current->next;
            last = last->next;
        }
    }

    // ger while loop successfully chalta rha null hme tk iska mtlb palindrome hai!
    // so returning true.

    return true;
    
}

Node* insertAtLast(Node *head , int value){
    Node *newNode = new Node;
    Node *p = head;

    if(head == NULL){
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = newNode;
    newNode->data = value;
    newNode->next = NULL;
    return head;
    
}


void Traversal(Node *head){
    Node *p = head;
    while(p!=NULL){
        cout<<p->data<<endl;
        p = p->next;
    }   
}
int main(){
    //  Node *head;
    // Node *second;
    // Node *third;
    // Node *fourth;

    // head = new Node;
    // second = new Node;
    // third = new Node;
    // fourth = new Node;

    // Connecting head and second
    // head->data = 1;
    // head->next = second;

    // Connecting second and third
    // second->data = 2;
    // second->next = third;

    // Connecting third and fourth
    // third->data = 3;
    // third->next = fourth;

    // fourth->data = 2;
    // fourth->next = NULL;
    Node *head = NULL;

    head = insertAtLast(head,1);
    head = insertAtLast(head,2);
    head = insertAtLast(head,2);
    head = insertAtLast(head,3);
    head = insertAtLast(head,2);
    head = insertAtLast(head,2);
    head = insertAtLast(head,1);
    

    // head = insertAtLast(head,44);
    Traversal(head);

    cout<<isPalindrome(head)<<endl; //1 means true 0 means false
    // Zero is used to represent false, and One is used to represent true.
    // For interpretation, Zero is interpreted as false and anything non-zero is interpreted as true.
    // C++ is backwards compatible, so the C-style logic still works in C++.
    // ( "true" is stored as 1, "false" as 0. )





    

    return 0;
}