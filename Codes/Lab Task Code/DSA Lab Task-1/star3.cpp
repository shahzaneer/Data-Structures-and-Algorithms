#include <iostream>
using namespace std;

int main(){

    for(int rows = 1; rows<=5;rows++){
        for(int spaces = 1; spaces<=5-rows;spaces++){
            cout<<" ";
        }
        for(int columns = 1; columns<=rows;columns++){
            cout<<" *";
        }

        cout<<endl;

    }

    return 0;
}