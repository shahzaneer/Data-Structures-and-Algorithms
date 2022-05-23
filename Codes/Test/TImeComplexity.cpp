#include <iostream>
using namespace std;

int main(){
    // sum from 1 to 10^11
    int sum = 0;
    // for (int i = 0; i <= 1000;i++){
    //     sum += i;
        
    // }
    int n = 1000;
    sum = (n * n+1) / 2;
    cout << sum << endl;
    return 0;
}