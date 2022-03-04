#include <iostream>
using namespace std;

// Insertion sort --> It considers the first element to be sorted array and the other array to be unsorted array. then it takes one element and compare it with the last element of sorted array if they need swapping it do swap otherwise it breaks the loop it do it till j<0
// it is partial soritng.
// it is stable , adaptive and mostly used in hybrid soting techniques.
// cpp ki STL main bhi kisi had tk use hoti hai yeh.



// 3 5 8 9 1
// 3 is sorted 5 8 9 1 is not sorted 
// 1st pass : 5 is considered the element and compared with 3 and swapped if not break;
// 1st : 3 5 8 9 1
//  2nd pass : 8 is considered and 3 5 is the sorted list so compared with it and swapped.
// 2nd  pass : 3 5 8 9 1
// 3rd pass : 3 5 8 9 1
// 4th pass : 1 3 5 8 9 



//* coding implementation -->
// 1st loop passes k liay hain tou yeh n-2 tk chalengay ya n-1 se pehle pehle tk.
// 2nd loop comparision k liay hai tou yeh i+1 se chalyagay aur j<0 tk jayega.


int main(){
    int array [] = {5,7,2,1,9};
    int n = 5;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>0;j--){
            if(array[j]<array[j-1]){
                int temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }
            else break; //This break statement makes it an adaptive algorithm.
            
        }
    }


    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }

    return 0;
}