#include <iostream>
using namespace std;

template <class x>
// x is palce holder for any type -> general Programming 
// like the concept of Java Generics

class array{
    public:
        x *arr;
        int size;
};

int main(){
// object Creation
    array <int> a1; // <> is used to specify the type of the object
    a1.size = 10;
    return 0;
}