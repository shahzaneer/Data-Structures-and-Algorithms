#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//* Binary Search -->
// is main sbse pehle array ko sort kia jata hai aur baadazaan mid wali value find ki jaati hai aur first value aur last value ka ta'ayyun bhi krlia jaata hai
// ab mid se key ko compare kia jata hai Ager key choti hogi highest ko peechay krdia jaata hai aur ager bara hota hai tou lowest ko mid se aik zyada krdia jata hai .....

// example smjhain k goya koi roll number k through apna paper bulk main dhoondh rha ho!

//  iski time complexity qadray behtar hoti hai linear search k muqablay main

// {1,2,43,5,77,8,9,55}  key = 43;



int binarySearch(int arr [] , int n, int key){
    int low = 0;
    int high = n;
    
    while(low<=high){
        int mid = low+high/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            high = mid-1;        
        }
        else if(arr[mid]<key){
            low = mid+1;
        }
    }

    return -1;
}

int main(){
    int array [10] = {1,11,33,5,6,7,33,8,93,2};
    
    sort(array,array+10);

    cout<<binarySearch(array,10,11)<<endl;

    


return 0;
}