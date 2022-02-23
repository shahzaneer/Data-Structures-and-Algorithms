#include <iostream>
using namespace std;

int main(){
    int num = 5;
    for(int rows = num; rows>=1;rows--){
        for(int spaces = num-rows; spaces<=num-rows;spaces++){
            cout<<" ";
        }

        for(int columns = rows; columns>=1;columns--){
            if(columns == rows){
                cout<<"*";
            }
            else{
                cout<<" *";
            }
        }

        cout<<"\n";
    }

    return 0;
}