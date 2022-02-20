#include <iostream>
using namespace std;

int main(){
    
    for(int i = 6; i>=0;i--){
        for(int j = i;j>=0;j--){
            cout<<"*";
        }

        cout<<"\n";
    }

    return 0;
}