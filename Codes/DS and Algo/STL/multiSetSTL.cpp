#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Sets Contain duplicate Elements
// ordered Sets -> they are sorted in ascending order or descending order
// Random access is not allowed

int main()
{

    multiset <int> s;
    // MultiSet is implemented like balanced BST (AVL or Red Black Tree type implementation)

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(10);
    s.insert(15);
    s.insert(1);
    s.insert(1);
    s.insert(1);

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

    for (auto i = s.rbegin(); i != s.rend(); i++)
    {
        cout << *i << " ";
        // it will be printed in descending order
    }
    cout << endl;

    s.erase(5);         // erase all the elements which are 5

    // if you want to remove only one element
    s.erase(s.find(1)); // return the pointer to the first occurrence of 1 and then erase it!
    

    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}