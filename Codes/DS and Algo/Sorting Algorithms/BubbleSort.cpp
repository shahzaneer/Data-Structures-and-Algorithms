#include <iostream>
using namespace std;

// Bubble Sort -> it sorts by sending the largest element to the right place at each iteration
// so it bubbles out the biggest element at its original position

// its complexity is O(n^2)
// its a stable algo -> it doesn't change the order of the elements with the same value



void bubbleSort(int *arr , int n){
    int temp;
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - 1; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = temp;
                }
        }
    }
}

void bubbleSortImproved(int *arr, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        // here it it not checking the already placed elements!
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}



void printArray(int *arr , int n){

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    int arr [5] = {5, 3, 1, 2, 4}; //static array unsorted
    int n = 5;
    // bubbleSort(arr, n);
    // printArray(arr, n);

    bubbleSortImproved(arr, n);
    printArray(arr, n);

    
    

    return 0;
}