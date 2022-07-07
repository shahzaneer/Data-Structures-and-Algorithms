#include <iostream>
using namespace std;

void hollowRectangle(){
    // * * * * *
    // *       *
    // *       *
    // *       *
    // * * * * *

    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==1 || i==5){
                cout<<"* ";
            }
            else if(j==1 || j==5){
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
    hollowRectangle();
    return 0;
}