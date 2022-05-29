#include <iostream>
#include <math.h>
using namespace std;

// function prototypes
//! ager sbki prototype likhdo tou nhi chal rha werna chal rha hai.
//! There's some internal working of the prototypes which im not getting 
// int main();
// void insert(int);
// void swap(int i, int j);
// void print();
void heapify();

int heap[100]; // heap array
static int n; // number of elements in the heap
void insert(int value){
    n++; //incrementing size of heap to add new element
    heap[n] = value; //inserting new element
    // now checking if the insertion is in correct order or not if not swap (heapify)
    heapify();
//     int i = n;

//     while(i>1 && heap[i] > heap[i/2]){
//         // After insertion heapify is done.
//         int parent = (i / 2);
//         // if (heap[i] > heap[parent])
//         // {
//             swap(heap[i], heap[parent]);
//             i = parent; // moving to the current parent
//     // }

// }

}

void heapify(){
    int i = n;

    while (i > 1 && heap[i] > heap[i / 2])
    {
        int parent = (i / 2);
        swap(heap[i], heap[parent]);
        i = parent; // moving to the current parent
    }
}

void print(){
    for(int i = 1; i <= n; i++){
        cout << heap[i] << " ";
    }
    cout << endl;
}
void swap(int i, int j){
    // Swapping of two elements in the heap
    int temp = heap[i];
    heap[i] = heap[j];
    heap[j] = temp;
}
int main(){

    insert(5);
    insert(12);
    insert(16);
    insert(1);
    insert(765);

    print();

    return 0;
}