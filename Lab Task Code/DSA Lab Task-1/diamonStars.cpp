#include <iostream>
using namespace std;

void diamond(){

    //       *
    //     * * *
    //   * * * * *
    // * * * * * * * 
    // * * * * * * *
    //   * * * * *
    //     * * * 
    //       * 

    //?  first half
    int n = 4;
    for(int rows = 1;rows<=n;rows++){
        for(int spaces = ((2*(n-rows))+1)-1; spaces>=0;spaces--){
            cout<<" ";

        }
        for(int columns = 1; columns<=(2*rows-1);columns++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    //?  second half
    for(int rows = n; rows>=1;rows--){
        for(int spaces = (2*(n-rows)+1); spaces>=1;spaces--){
            cout<<" ";
        }
        for(int columns = (2*(rows-1)+1);columns>=1;columns--){
            cout<<"* ";
        }
        cout<<"\n";
    }
}

int main(){
    diamond();

    return 0;
}