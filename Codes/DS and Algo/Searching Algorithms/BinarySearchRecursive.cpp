#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr [] , int size , int low , int high , int key){
    int mid = low + ((high - low) / 2);

    if (low > high)
    {
        return -1;
    }

    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid]>key){
        return binarySearch(arr, size, low, mid - 1, key);
    }
    else if(arr[mid] < key){
        return binarySearch(arr, size, mid + 1, high, key);
    }

    return -1;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int elementFoundAtIndex = binarySearch(arr,9,0,9-1,10);
    // cout << elementFoundAtIndex << endl;

    if (elementFoundAtIndex == -1)
    {
        cout << "Not found " << endl;
    }
    else
        cout << "Found ";

    return 0;
}