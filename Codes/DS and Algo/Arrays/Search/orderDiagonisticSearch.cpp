#include <iostream>
#include <bits/stdc++.h> //it will include the STL of cpp
using namespace std;

// order-diagonostic binary search ki main intuition yeh hai
// jis array main hum search kr rhay hain wo ager reversely sort 
// hui tou kya hoga ? 
// ab yeh binary search is cheez ko bhi tackle krti hai .
// krna srff itna hai k yahan se checing start horhi hai usse copy krna hai
// aur first aur last element ko compare krwalena hai 
// ager ascending ho tou normal wala code werna main sign of equality change krdena hai


int binarySearch(int array [] ,int n, int key);
int main(){
    int arr1 [] = {5,4,3,2,1};  //* reversely sorted Array
    int arr2 [] = {1,2,3,4,5};  //* Sorted Array
    cout<<binarySearch(arr2,5,4);
    

    return 0;
}


int binarySearch(int array [],int n, int key){
    
    int low = 0;
    int high = n;
    
    
    while(low<=high){
        // int mid = low+high/2; // it depends upon the size of array!
        // another efficient way is
        int mid = low + ((high-low)/2); //It is independent of the size of an array!

        if(array[0]<array[n-1]){

        if(array[mid]==key){
            return mid;
        }
        else if(array[mid]>key){
            high = mid-1;        
        }
        else if(array[mid]<key){
            low = mid+1;
        }
    }
    else{
        if(array[mid]==key){
            return mid;
        }
        else if(array[mid]<key){
            high = mid-1;        
        }
        else if(array[mid]>key){
            low = mid+1;
        }

    }

    }

        return -1;

}