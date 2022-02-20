#include <iostream>
using namespace std;

//    1
//   1 2 
//  1 2 3 
// 1 2 3 4 
//1 2 3 4 5 

int main(){

    for(int rows = 1; rows<=5;rows++){
        for(int spaces = 1;spaces<=5-rows;spaces++){
            cout<<" ";
        }
        for(int columns = 1;columns<=rows;columns++){
            cout<<columns<<" ";
        }

        cout<<"\n";
    }

    return 0;
}