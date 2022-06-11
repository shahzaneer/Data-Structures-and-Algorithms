#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// unordered Sets -> random retrieval of elements
// Random access is not allowed
//  Benefit of ordered set ? -> Time Complexity in average case is O(1) for insertion and deletion
//  Implemented by hashing so worst case may approach to O(n)



int main()
{

    unordered_set<int> s;

    s.insert(5);
    // s.insert(5);
    // s.insert(5);
    s.insert(10);
    s.insert(15);
    s.insert(1);
    // s.insert(1);
    // s.insert(1);

    //! It only contains the unique elements 

    for (auto i : s)
    {
        cout << i << " ";
        // it will be printed in ascending order
    }

    cout << endl;

    set<int>::iterator i; // iterator
    // for(i = s.begin(); i != s.end(); i++){
    //     cout << *i << " ";
    // }

    s.erase(5); // erase all the elements which are 5

    // if you want to remove only one element
    s.erase(s.find(1)); // return the pointer to the first occurrence of 1 and then erase it!

    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}