#include <iostream>
using namespace std;

//* linear Search --> ismain aik aik kr k har element ko check krte hain
//* jahan mil jayegi key wahan return krte hain!

// ? Time Complexity --> O(n) 

// (as the loop traverses through the whole array);


int linearSearch(int  arr [], int n, int key){

    for(int i=0; i<=n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
    } 


int main(){
    int array [10] = {10,3,47,5,78,89,5,9,76,4};
    cout<<linearSearch(array,10,78);

return 0;
}