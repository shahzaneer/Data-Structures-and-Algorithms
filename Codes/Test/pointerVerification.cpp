#include <iostream>
using namespace std;
int main(){
    int *p;
    p = new int [5];

    for(int i=0;i<5;i++){
        //* this syntax is for values
        //! cout<<*(p+i)<<endl; in anycase now to avoid confusion use this!
        // cout<<p[i]<<endl;
        // * this syntax is for addresses
        // cout<<p+i<<endl;
        

        

    }

return 0;
}