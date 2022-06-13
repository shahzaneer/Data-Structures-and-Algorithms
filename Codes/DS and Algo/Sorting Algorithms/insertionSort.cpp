#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// it is like priority queue's insertion therefore it is called insertion sort
// it is a stable algo -> it doesn't change the order of the elements with the same value
// it is a in-place algo -> it doesn't require extra space
// it is adaptive in nature -> if already sorted array is given we can easily sort it in O(n)
// overall time complexity is O(n^2)

void printArray(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertionSort(int *arr , int n){
    int key, j;
    // we consider the first element as sorted
    for (int i = 1; i <= n - 1;i++){
        // loop for the passes
         key = arr[i]; //initially the key is the element at index 1
         j = i - 1; // j is the index of the last element which is sorted initially it is zero index (the first element)
        // loop for each pass
        while( j>=0 && arr[j] > key){
            arr[j + 1] = arr[j]; // shift the elements to the right
            j--; // decrement the index of the last element
        }

        arr[j + 1] = key; // insert the key at the correct position
    }
}

int main(){

    int arr [5] = {5, 3, 1, 2, 4}; //static array unsorted
    int n = 5;
    printArray(arr, n);
    cout << endl;
    insertionSort(arr, n);
    printArray(arr, n);


    return 0;
}