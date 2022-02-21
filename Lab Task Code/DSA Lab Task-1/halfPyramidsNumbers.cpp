#include <iostream>
using namespace std;

static void halfPyramidsNumbers(){
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5

    for(int rows = 1;rows<=5;rows++){
        for(int columns = 1; columns<=rows;columns++){
            cout<<rows<<" ";
        }
        cout<<"\n";
    }

}
int main(){
    halfPyramidsNumbers();


    return 0;
}