# Heap

- Special type of binary tree with some special Properties

1. The basic Requirement of a heap is that value of a node must be `>=` or `<=` to the values of its children.
2. Should be a complete or almost complete binary tree.
   (Complete binary tree is one in which all the levels are filled ,but in almost complete binary tree the last level is not filled completely but is filled in order left to right)

# Types

- `MaxHeap` in which the root is greater then children
- `MinHeap` in which the root is smaller then children

# Implementation

- Because of Complete and almost Complete Binary tree we use Array for implementing Heap Data Structure.

# Time Complexity

- Insertion --> `O(log n)`
- Deletion --> `O(log n)`

```cpp
// Important formulas for implementation

int i = nodes;
int parent = i/2;
int leftChild =  i * 2 + 1;
int rightChild = i * 2 + 2;
```
