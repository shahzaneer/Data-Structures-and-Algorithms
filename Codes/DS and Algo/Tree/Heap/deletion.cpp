#include <iostream>
#include <math.h>
using namespace std;

void heapify();

int heap[100]; // heap array
static int n;  // number of elements in the heap

void insert(int value)
{
    // pehle add krdo then heapify krdo!
    n++;
    heap[n] = value;
    heapify();
}

void heapify()
{
    int i = n;

    while (i > 1 && heap[i] > heap[i / 2])
    {
        int parent = (i / 2);
        swap(heap[i], heap[parent]);
        i = parent; // moving to the current parent
    }
}

void print()
{
    for (int i = 1; i <= n; i++)
    {
        cout << heap[i] << " ";
    }
    cout << endl;
}
void swap(int i, int j)
{
    // Simple swap logic here for swapping values of heap[child] and heap[parent]
    int temp = heap[i];
    // cout << "Pakistan noor hai " << endl;
    heap[i] = heap[j];
    heap[j] = temp;
    // cout << "Pakistan noor hai " << endl;
}

// Deletion in heap only takes  place form the root node
// only root will be deleted and then we will heapify the rest of tree.
void delete_root()
{
    int i = 1;         // root's index
    heap[i] = heap[n]; // copying the last element to root
    n--;               // decrementing the size of heap
    // now we will heapify the rest of tree
    // this heapification will be done in the reverse manner as of insertion
    int leftChild, rightChild;
    while (i <= n && (leftChild = 2 * i) <= n && (rightChild = 2 * i + 1) <= n)
    {
        leftChild = 2 * i;
        rightChild = 2 * i + 1;
        // larger will keep the index of greater child
        int larger = heap[leftChild] > heap[rightChild] ? leftChild : rightChild;
        if (heap[i] < heap[larger])
        {
            swap(heap[i], heap[larger]);
            i = larger; // beacuse larger contains the childNode which was large and now this child node will be our parent node
        }
    }
}

// function to delete the heap root

int main()
{

    insert(5);
    insert(12);
    insert(16);
    insert(1);
    insert(765);

    print();

    delete_root();
    print();

    return 0;
}