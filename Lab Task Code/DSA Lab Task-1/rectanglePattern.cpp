#include <iostream>
using namespace std;

static void rectangle(){
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    for(int rows = 1; rows<=8;rows++){
        for(int columns = 1; columns<=5;columns++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}

int main(){
    rectangle();


    return 0;
}