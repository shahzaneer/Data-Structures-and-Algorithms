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
    heap[i] = heap[j];
    heap[j] = temp;
}

void deleteValue(int key){
    for (int i = 1; i <= n;i++){
        if(heap[i] == key ){
            heap[i] = heap[n];
            n--;
            // heapify();
            break;
        }
    }
}
int main()
{

    insert(5);
    insert(12);
    insert(16);
    insert(1);
    insert(765);

    print();

    deleteValue(765);
    print();

    return 0;
}