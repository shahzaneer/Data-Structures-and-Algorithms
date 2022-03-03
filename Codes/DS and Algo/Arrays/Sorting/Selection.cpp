#include <iostream>
using namespace std;

//* Selection-Sort --> is main hum krte hain sbse chotay element ka selection array main se aur usse first position per rkhdete hain 
//* next iteration main us element ko chor kr baaki jo list hoti hai us tk jatay hain aur smaller element dhoondh kr shuru main rkhdete hain.


// har step main aik smaller value start main aati jayegi aur aik sorted aur aik unsorted area bnta jyaega.

// coding area --> do for loop lagengay aik 0 se n-1 tk chalyga (q jee? q k last iteration se pehle hi array sort hogyi hogi)
// dusra i+1 se chalayga n tk (q k array k sorted part ko chor dena hai aur next puri array ko sort krna hai)

// *  7,5,9,6,3,8,1
// *  1,7,5,9,6,3,8
// *  1,3,7,5,9,6,8
// *  1,3,5,7,9,6,8
// *  1,3,5,6,7,9,8
// *  1,3,5,6,7,8,9


void selectionSort(int *p,int n){

    // for making in place selectionSorting we have taken the base address of array
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(*(p+i)>*(p+j)){
                int temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }

}

int main(){
    int array [] = {7,5,9,6,3,8,1};
    int n = 7;

    // selectionSort(&array[0],7);
    selectionSort(array,7); //the base address of array is passed

    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(array[i]>array[j]){
    //             int temp = array[i];
    //             array[i] = array[j];
    //             array[j] = temp;
    //         }
    //     }
    // }


    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }


return 0;
}



//! C++ does not allow to pass an entire array as an argument to a function. However,
//! You can pass a pointer to an array by specifying the array's name without an index.