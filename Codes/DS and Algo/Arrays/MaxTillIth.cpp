#include <iostream>
using namespace std;

int main(){
    int array [] = {0,3,6,8,5,3,2};
    int n = 7;

    //  0 3 6 8 8 8 8
    int maxArray = -1999999;

    for(int i=0;i<n;i++){
        // max function return the max between the given numbers
        maxArray = max(maxArray,array[i]);
        cout<<maxArray<<" ";
    }

    return 0;
}