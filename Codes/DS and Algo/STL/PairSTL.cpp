#include <iostream>
#include <utility>
// Pair is Defined in the utility header file
// pair is a container that stores two objects of different types
using namespace std;


int main(){
    pair<int, int> p1;
    pair<string, string> p2;
    pair <int, string> p3;
    pair<string, float> p4("Hello to STL", 999.9f); //we can assign values this way also

    // p1.make_pair(1,2); // this function make_pair helps us assign the pair values
    // p2.make_pair("Hello","World");
    // p3.make_pair(1,"Hello");

    // pair p9.make_pair("Hello",3.14);

    pair p5(p2); // p5 contains the copy of p2

    pair <int ,int > p7 = {1,2}; // this is also a way to assign values to the pair

    p1.first = 1;
    p1.second = 2;

    pair<char, int> pair2 = make_pair('B', 2);

    cout << "p1.first = " << p1.first << endl;
    cout << "p1.second = " << p1.second << endl;

    return 0;
}