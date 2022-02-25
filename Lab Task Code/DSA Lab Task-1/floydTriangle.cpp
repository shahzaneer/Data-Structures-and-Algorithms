#include <iostream>
using namespace std;

static void floydTriangle(){
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15

    int counter = 0;
    for(int rows = 1; rows<=5;rows++){
        for(int columns = 1;columns<=rows;columns++){
            cout<<++counter<<" ";
        }
        cout<<"\n";
    }

}

int main(){
    floydTriangle();

    return 0;
}