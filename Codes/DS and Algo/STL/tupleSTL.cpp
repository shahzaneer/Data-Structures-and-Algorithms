#include <iostream>
#include <tuple>
using namespace std;

// tuple is just like pair but it stores more than two objects
// tuple is a container that stores objects of different types
// tuple is a sequence of objects




int main(){
    tuple<int, int, string> t1 = make_tuple(1,2,"Hello");
    // Make_tuple is A FUNCTION to make a tuple 
    tuple <string, double , bool> t2 = {"hell", 3.14, true}; // we can assign values to the tuple

    tuple t3 = {1,2,"Noor"}; // this is also a way to assign values to the tuple //without declaring the generics <>

    // get <position>(tupleObject) is a function to get the value of the tuple at the position
    cout << get<0>(t1) << endl;
    cout << get<1>(t1) << endl;
    cout << get<2>(t1) << endl;
    return 0;
}