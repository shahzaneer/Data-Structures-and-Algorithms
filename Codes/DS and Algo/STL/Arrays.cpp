#include <iostream>
#include <array> //it is necessary to include the array header file

// Static Array -> Array of fixed size
using namespace std;


int main(){
    array<int,6> a1; 
    //first is data type of array and the second is the size of array
    a1 = {1,2,3,4,5,6}; //this is the way to declare the values


    // for(int i=0;i<6;i++){
    //     cout<<a1[i]<<" " <<endl;
    // }

    // cout << a1.at(2) << endl; //array at the index 2 will be given out
    // cout << a1.front() << endl; //first element of the array will be given out
    // cout << a1.back() << endl; //last element of the array will be given out
    // cout << a1.size() << endl;   //size of the array will be given out

    // a1.fill(10); //this will fill the array with 10

    // for(int i=0;i<6;i++){
    //     cout<<a1[i]<<" " <<endl;
    // }

    array <int , 6> a2 = {11,22,33,44,55,66};

    a1.swap(a2) // now a1 will be a2 and a2 will be a1


    return 0;
}