#include <iostream>
#include <map>
using namespace std;

// Map --> associative Array --> key value pair
// Map keys are unique and they cannot be altered
// Map values can be altered
// Map keys are always in the sorted order


int main(){
    map<string, int> marks;
    // first one is the index and the second one is the value
    marks["Noor"] = 100;
    marks["Ali"] = 90;
    marks["Hassan"] = 80;
    marks["Shahzaneer"] = 70;

    // cout << marks["Noor"] << endl;

    // cout << marks.size() << endl; //it will return the total numbers of key-value pairs in Map

// Another way to declare maps
    map<string ,string> names {{ "Noor", "Ali" }, { "Shahzaneer", "Ahmed" } , {"Salahuddin", "Ayubi"}};

    names["Shahzaneer"] = "Noor"; // this will replace the value of the key "Shahzaneer" with "Noor"
    // it means that the values can be changed!

    // cout << names["Shahzaneer"] << endl;


    //! Accessing of Map using iterators 

    // map<string, string> :: iterator it = names.begin();
    // while(it != names.end()){
    //     cout << it->first << " " << it->second << endl;
    //     // first are the keys and the second are the values
    //     it++;
    // }


    // ! insertion in MAPS is done through pairs

    names.insert(pair<string, string>("Shams", "Tambrezi"));
    names.insert(pair<string, string>("Jalalluddin", "Roomi"));

    map<string, string> :: iterator it = names.begin();
    while(it != names.end()){
        cout << it->first << " " << it->second << endl;
        // first are the keys and the second are the values
        it++;
    }

    // the printing will happen in the sorted order of the keys
    // for strings there will be dictionary one

    return 0;
}