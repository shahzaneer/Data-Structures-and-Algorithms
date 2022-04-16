# Circular Queue

- The operation is performed in a circular manner so that the space can be used efficiently!
- Fifo is not 100% performed!
- Thus the drawback of normal Queue (array implementation) is rectified!
- We use Circular increment here!

```cpp

int i;
//  linear increment
 i = i+1;
// circular increment
i = (i+1) % size
```

# Why Circular Queue?

- Consider a scenerio , if you take a queue of 3 elements and add 3 elements then dequeue 1 element and try to enqueue one element. you cannot do it.
- Therefore we use Circular queue.
