#include <iostream>
using namespace std;


static void halfPyramidRightAlign(){
    //        *
    //      * * 
    //    * * *
    //  * * * *
    //* * * * * 
    int n = 5;

    for(int rows = 1;rows <= 5;rows++){
        for(int columns=1;columns<=5;columns++){
            if(columns<=n-rows){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<"\n";
    }
}   
int main(){

    halfPyramidRightAlign();    

    // for(int rows = 1;rows<=5;rows++){
    //     for(int spaces = 5-rows;spaces>=1;spaces--){
    //         cout<<" ";
    //     }
    //     for(int columns=1; columns<=rows;columns++){
    //         cout<<"* ";
    //     }
    //     cout<<"\n";
    // }

    return 0;
}