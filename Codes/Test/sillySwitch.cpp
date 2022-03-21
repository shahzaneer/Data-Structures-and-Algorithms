#include <iostream>
using namespace std;
int main(){
    static int option = 1;
    switch (option)
    {
        case 1:
            cout<<"This is Shahzaneer Ahmed"<<endl;
            ++option;
            break;
        case 2:
            cout<<"CS Sophomore"<<endl;
            option++;
            break;
        case 3:
            cout<<"Data Enthusiast"<<endl;
            option++;
            break;
        case 4:
            cout<<"Flutter Developer"<<endl;
            option++;
            break;
        case 5:
            cout<<"Public Speaking"<<endl;
            option++;
            break;        
    }
    return 0;
}


//* Do switch statements check every case?
//* Based on the value of answer , the switch will jump directly
//* to the matching case and perform the statements following the colon.
//* This is more efficient than the if-statements,
//* because of the direct jump—the switch doesn't 
//* repeatedly check every possible value.