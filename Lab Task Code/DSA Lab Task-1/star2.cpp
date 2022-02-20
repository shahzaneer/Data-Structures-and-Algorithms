#include <iostream>
using namespace std;

int main(){
    int num = 5;
    for(int rows = 1; rows<=num;rows++){
        for(int spaces = 1; spaces<=num-rows;spaces++){
            cout<<" ";
        }

        for(int columns = 1; columns<=rows;columns++){
            if(columns == 1){
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