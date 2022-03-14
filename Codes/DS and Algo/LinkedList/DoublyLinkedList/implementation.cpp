#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *previous; //this address part is extra in case od doubly!
};
// Inserting
insertAtEnd();
insertAtStart();
insertAtPosition();
insertAfterPosition();
insertBeforePosition();
// deleting
deleteFromFirst();
deleteFromLast();
deleteAtPosition();
deleteWithKey();

// Traversal
normalTraversal();
reverseTraversal();
twoWaysTraversal();

int main(){

return 0;
}