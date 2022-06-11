#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Sets Contain Unique Elements
// SETS -> they are of two types:
// ordered Sets -> they are sorted in ascending order or descending order
// unordered Sets
int main(){

    set<int> s;
    // Set is implemented like balanced BST (AVL or Red Black Tree type implementation)

    s.insert(5);
    s.insert(10);
    s.insert(15);
    s.insert(1);

    for(auto i: s){
        cout << i << " ";
        //it will be printed in ascending order
    }

    cout << endl;

    set <int> :: iterator i; //iterator
    // for(i = s.begin(); i != s.end(); i++){
    //     cout << *i << " ";
    // }

    for(auto i = s.rbegin(); i != s.rend(); i++){
        cout << *i << " ";
        // it will be printed in descending order
    }
    cout << endl;

    s.erase(5);         // erase the element 5
    s.erase(s.begin()); // pointer to the first element

    for(auto i = s.begin(); i != s.end(); i++){
        cout << *i << " ";
    }

    return 0;
}