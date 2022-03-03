#include <iostream>
using namespace std;
// Bubble Sorting --> it bubbles out the largest element at the end of array.
// it is repeated swapping of adjacent elements if they are in a wrong order.
//  if left one is greater then the right one.

// har iteration k bad sbse bara element last main chala jayega 
// aur total iterations n-1 hongi before we get a sorted array
void printArray(int *p , int n){
    for(int i=0;i<n;i++){
        cout<<*(p+i)<<" ";
    }
}

void bubbleSort(int *p , int n){

    int counter = 1;
    while(counter<n){
        for(int i=0;i<=n-1-counter;i++){
            if(*(p+i)>*(p+i+1)){
                int temp = *(p+i);
                *(p+i) = *(p+i+1);
                *(p+i+1) = temp;
            }
        }
        counter++;
    }


}

int main(){

    int array [] = {7,5,9,6,3,8,1};
    int n = 7;

printArray(array,7);
cout<<endl;
bubbleSort(array,7);

printArray(array,7);



    // int counter = 1;

    // while(counter<n){
    //     for(int i=0;i<=n-1-counter;i++){
    //         if(array[i]>array[i+1]){
    //             int temp = array[i];
    //             array[i] = array[i+1];
    //             array[i+1] = temp;
    //         }
    //     }

    //     counter++;
    // }

    return 0;
}