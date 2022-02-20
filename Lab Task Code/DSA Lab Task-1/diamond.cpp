#include <iostream>
using namespace std;

int main(){

    // first half
    int adder = 0;
    for(int row = 1; row<=5;row++){
        for(int space = 1; space<=5-row;space++){
            cout<<" ";
        }
        for(int column = 1;column<=row+adder;column++){

            if((column==1)){
                cout<<"*";
                break;
            }
            else if((column == (row+adder)) && (column!=1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            adder++;

            if(adder>9) break;
            

        }
        cout<<"\n";
    }
    // second half

    return 0;
}