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
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}

// It is used to add elements in the linkedlist 
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

//* LinkedList in Reverse Order (iterative)
Node* Reverse(Node *head){
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


//* LinkedList in Reverse Order (recursive)
Node* recursiveReverse(Node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node *newHead = recursiveReverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;

}

//* Palindrome Checking
Node* Mid(Node *head){
    Node *slow = head;
    Node *fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

bool isPalindrome(Node *head){
    Node *current = head;
    Node *mid = Mid(head);
    Node *last = Reverse(mid->next);

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
    return true;
    
}

//* Printing in a specific Manner
void printInOrder(Node *head){
    Node *p = head; 
    Node *m = Mid(head);
    Node *q = Reverse(m->next); 
    
    while(q!=NULL || p!=NULL){
        
        if(p!=NULL){

            cout<<p->data<<endl;
            p = p->next;
        }
        if(q!=NULL){

            cout<<q->data<<endl;
            q = q->next;
        }
        
    }
        
}


// * Swapping values of two nodes.
void swapTwoValues(Node *head, int pos1 , int pos2){

    Node *f = head;
    Node *s = head;

    int i=1,j=1;
    while(i<pos1){
        f = f->next;
        i++;
    }
    while(j<pos2){
        s = s->next;
        j++;
    }

    // swapping logic
    int temp;
    temp = f->data;
    f->data = s->data;
    s->data = temp;
}



int main()
{
    Node *head = NULL;
    head = insertAtLast(head,1);
    head = insertAtLast(head,2);
    head = insertAtLast(head,3);
    head = insertAtLast(head,4);
    head = insertAtLast(head,5);
    head = insertAtLast(head,6);
    head = insertAtLast(head,7);
    head = insertAtLast(head,8);
    head = insertAtLast(head,9);
printInOrder(head);
    Traversal(head);

    return 0;
}