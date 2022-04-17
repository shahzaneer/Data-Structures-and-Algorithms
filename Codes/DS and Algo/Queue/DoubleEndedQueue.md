# Double Ended Queue

- Commonly known as DEqueue.
- Not to be confused with `dequeue` which is an operation for removing the element from Queue.
- It is called double ended because you can insert and delete (enqueue and dequeue) from both front and rear ends.
- Consequently, It doesn't follow the FIFO Rule 👼

# Types

- Insertion Restricted DEqueue (Enqueue/insertion can take place from only one point)
- Deletion Restricted DEqueue (denqueue/deletion can take place from only one point)

## Important Methods with Time Complexity

```cpp
int isFull()
int isEmpty()
void enqueueFromFront()   `O(1)`
void enqueueFromRear()    `O(1)`
void dequeueFromFront()   `O(1)`
void dequeueFromRear()    `O(1)`
```

## how to implement DEqueue?

- By either using a circular Array
- or by using a doubly linkedlist
