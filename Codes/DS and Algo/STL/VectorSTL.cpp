#include <iostream>
#include <vector>
using namespace std;

// Vector is Dynamic Array Data Structure (Container)

int main(){
    // Direct Initialization
    vector <int> v1 = {1,2,3,4,5};
    vector <float> v2  {1.5f, 2.5f, 3.5f, 4.5f, 5.5f};

    vector<int> v3; // the initial capacity of a vector is 0;
    vector<int> v4(10); // the initial capacity of this vector is 10;
    vector<string> v5(10, "Shahzaneer Ahmed"); // the initial capacity of this vector is 10 and each element is "Shahzaneer Ahmed";

    // for (int i = 0; i<v2.size(); i++){
    //     cout << v2[i] << endl; //Subscripting the vector
    // }

    v5.push_back("Noor"); // this function adds an element to the end of the vector

    // cout << v5.capacity() << endl; // this function returns the capacity of the vector
    // jese hi new element add hona hota hai tou initial capacity ko double krdia jata hai
    // initial capacity 10 thi 1 noor ne add hona tha tou capacity 20  (yani double hogyi)

    // v5.pop_back(); // this function removes the last element of the vector

    //pop krne se capacity per koi farq nhi perta

    v1.push_back(66);
    // cout << v1.size() << endl;
    // cout << v1.capacity() << endl;
    v1.push_back(0);
    v1.push_back(0);
    // cout << v1.size() << endl;

    // values index k size tk return hotin hain iske baad nhi hotin

    //! beech main value insert krne k liay iterator banana hota hai 
    // Iterator aik pointer hai jo vector ki kisi bhi value ko point kr rha hota hai

    vector <int> :: iterator it; //iterator declaration
    it = v1.begin(); // iterator ko begin kr rha hai
    v1.insert(it, 10101); // it jis position ko point kr rha hai wahan add hojayega

    v1.insert(it + 5, 999); // 5th position per 999 add kro baki shift hojatay hain
    // no need of shifting here!

    for(it = v1.begin(); it != v1.end(); it++){
        cout << *it << endl; //it aik pointer hai aur hm *it print kr rhay hain yani value at it!
    }



    return 0;
}