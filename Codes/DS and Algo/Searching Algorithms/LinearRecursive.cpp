#include <iostream>
using namespace std;

// Time Complexity is --> O(n)
// Space Compexity is also high due to recursive calls !

static int i = 0;
int linearSearch(int arr [], int key , int index , int size){
    if(i == size){
        // as index is always smaller than size
        return -1; 
    }
    if(arr[i] == key){
        return i;
    }

    return linearSearch(arr, key, ++i , size);
}    

int main(){

    int arr[6] = {10, 54, 12, 7, 2, 34};

    int elementFoundAtIndex = linearSearch(arr, 12, i, 6);

    if(elementFoundAtIndex == -1)
        cout << "Element was not found " << endl;
    else
        cout << "Element was found at the index " << elementFoundAtIndex << endl;
    return 0;
}