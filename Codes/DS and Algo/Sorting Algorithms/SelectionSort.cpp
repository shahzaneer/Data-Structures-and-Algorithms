#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr , int size){
    for (int i = 0; i < size;i++){
        cout << *(arr + i) << " ";
    }
}

void selectionSort(int *arr , int size){
    int min;
    for (int i = 0; i < size - 1; i++)
    {
        min = i;
        for (int j = i+1; j < size; j++){
            // in selection sort the outer looping value takes care of the inner looping value
            if(arr[min] > arr[j]){

                int temp = arr[j];
                arr[j] = arr[min];
                arr[min] = temp;
            }
        }
    }
}
int main(){
    int arr[] = {5,4,3,2,1};
    int size = 5;
    printArray(arr,size);
    selectionSort(arr,size);
    cout << endl;
    printArray(arr,size);

    return 0;
}