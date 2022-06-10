#include <iostream>
using namespace std;

// Time Complexity is --> O(n)

int linearSearch(int arr [], int length, int key){
    for (int i = 0; i < length; i++){
        if(arr[i] == key){
            return i; // returning the index
        }
    }

    return -1; // as -1 is not an index of any array
}
int main(){
    int arr[5] = {2, 7, 4, 3, 1};
    int foundAtIndex = linearSearch(arr, 5, 9);

    if(foundAtIndex == -1)
        cout << "Element doesn't exist!";
    else
        cout << "Element was found at the index " << foundAtIndex << endl;
    return 0;
}