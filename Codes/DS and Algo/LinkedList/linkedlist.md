# LinkedList

- Linear data Structure
- Easy Insertion
- Easy Deletion
- Slow accessing / random accessing is not possible
- Pointer variables are needed for each element

> A linked list is a linear data structure (like arrays) where each element is a separate object. Each element (that is node) of a list is comprised of two items – the data and a reference to the next node.

## Types of Linked List

1. Singly Linked List: In this type of linked list, every node stores address or reference of the next node in the list and the last node has the next address or reference as NULL. For example 1->2->3->4->NULL

2. Doubly Linked List: In this type of Linked list, there are two references associated with each node, One of the reference points to the next node and one to the previous node. The advantage of this data structure is that we can traverse in both directions and for deletion, we don’t need to have explicit access to the previous node. Eg. NULL<-1<->2<->3->NULL

3. Circular Linked List: Circular linked list is a linked list where all nodes are connected to form a circle. There is no NULL at the end. A circular linked list can be a singly circular linked list or a doubly circular linked list. The advantage of this data structure is that any node can be made as starting node. This is useful in the implementation of the circular queues in the linked list. Eg. 1->2->3->1 [The next pointer of the last node is pointing to the first]

```
Accessing time of an element : O(n)
Search time of an element : O(n)
Insertion of an Element : O(1) [If we are at the position
                                where we have to insert
                                an element]
Deletion of an Element : O(1) [If we know address of node
                               previous the node to be
                               deleted]

```
