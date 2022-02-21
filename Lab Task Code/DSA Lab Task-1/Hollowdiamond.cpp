#include <iostream>
using namespace std;

static void diamond(){
    //         *
    //       *   * 
    //     *       *
    //   *           *
    // *               *
    //  *              *
    //   *            *
    //     *         *
    //      *       *
    //        *   *
    //           *

    // first half
    int n = 5;
    for(int rows = 1; rows<=5;rows++){

        for(int spaces =2*(n-rows)+1;spaces>=0;spaces--){
            cout<<" ";
        }
        for(int columns =1;columns<=2*rows-1;columns++){
            if(columns==1 || columns==(2*rows-1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    // second half

    for(int rows = 5; rows>=1;rows--){

        for(int spaces =1; spaces<=2*(n-rows)+1;spaces++){
            cout<<" ";
        }
        for(int columns =2*rows-1;columns>=0;columns--){
            if(columns==1 || columns==(2*rows-1)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }

}

int main(){
    diamond();
    
    return 0;
}