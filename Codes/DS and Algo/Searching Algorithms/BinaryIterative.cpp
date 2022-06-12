#include <iostream>
using namespace std;
//* Binary Search -->
// is main sbse pehle array ko sort kia jata hai aur baadazaan mid wali value find ki jaati hai aur first value aur last value ka ta'ayyun bhi krlia jaata hai
// ab mid se key ko compare kia jata hai Ager key choti hogi highest ko peechay krdia jaata hai aur ager bara hota hai tou lowest ko mid se aik zyada krdia jata hai .....

// example smjhain k goya koi roll number k through apna paper bulk main dhoondh rha ho!

//  iski time complexity qadray behtar hoti hai linear search k muqablay main

// {1,2,43,5,77,8,9,55}  key = 43;


int binarySearch(int arr [] , int size , int key){
    int low = 0;
    int high = size - 1;

    while(low<=high){
        int mid = (low + ((high - low) / 2));
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            high = mid - 1;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
    }

    return -1; // as there is no negative indexing
}
int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int elementFoundAtIndex = binarySearch(arr, 9, 6);

    if(elementFoundAtIndex == -1){
        cout << "Not found " << endl;
    }
    else
        cout << "Found ";

    return 0;
}