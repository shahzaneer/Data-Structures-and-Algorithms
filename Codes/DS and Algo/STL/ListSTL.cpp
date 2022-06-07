#include <iostream>
#include <list>
using namespace std;


// List is a container that stores objects of same type in a bidirectional way
// list is like a doubly linkedlist.
//! it can be accessed from front to back or from back to front

int main(){
    // List Declaration
    list<int> l1; //empty list
    list <string> l2 {"Noor","Ali","Hassan"}; //list with initial values
    list <int> l3 {9,7,4,2,20,1,5,7}; //list with initial values

    // cout << l2[0] its not a vector or array therefore it cannot be accesed using this [] operator

    // for printing it we will use iterator


    // ! Int Iterator

    // list<int>::iterator it = l3.begin(); //if iterator is of int type it can only iterate int type list
    // while(it != l3.end()){
    //     cout << *it << " ";
    //     it++;
    // }

    //! String Iterator

    // list <string>:: iterator it2 = l2.begin();
    // while(it2 != l2.end()){
    //     cout << *it2 << " ";
    //     it2++;
    // }


    // Operations on List
    l2.push_back("Flutter Islamabad");
    l2.push_back("GDSC CUI");
    l2.push_front("Solutionfest");
    

    // list <string>:: iterator it2 = l2.begin();
    // while(it2 != l2.end()){
    //     cout << *it2 << " ";
    //     it2++;
    // }

    // cout << l2.size() << endl; // size of list

    // l2.pop_back(); // removes the last element
    // l2.pop_front(); // removes the first element

    // l3.sort(); // sorts the list in ascending order

    // l3.reverse(); // reverses the list

    // list<int>::iterator it3 = l3.begin();
    // while (it3 != l3.end())
    // {
    //     cout << *it3 << " ";
    //     it3++;
    // }

    // l3.clear(); // clears the list
    l3.remove(7); // removes the element 7 from the list

    list<int>::iterator it3 = l3.begin();
    while (it3 != l3.end())
    {
        cout << *it3 << " ";
        it3++;
    }

    return 0;
}