#include <iostream>
using namespace std;

// Here we will create a linkedList!
// ADT k tor per hi implement krni paregi linkedlist java ki trhh bani banye nhi milegi
// Linkedlist is all about Nodes jisse hum structure se implement karengay.

struct Node{
// aik node main do cheezain hoti hain aik tou data aur aik next element ka address
// Linkedlist main aik node dusri node ko point kr rhi hoti hai
// we know that same type of pointer can point a data type
// tou node ko point krne k liay node type ka pointer banana hoga
    int data;
    Node *next; 
    
};


// now here we will define our Operations for linkedList

void Traversal(Node *p){

    while(p!=NULL){
        cout<<p->data<<endl;
        p = p->next;
    }


}



int main(){
    // teen pointers banaaliay nodes k liay
    // in k liay heap main memory allocate krni hai 
    
    Node *first;
    Node *second;
    Node *third;
    first = new Node;
    second  = new Node;
    third = new Node;

    // Connecting first and second
    first->data = 10;
    first->next = second;
    // Connecting second and third
    second->data = 20;
    second->next = third;
    // Terminating on third one
    third->data = 30;
    third->next = NULL;

    Traversal(first);



    return 0;
}