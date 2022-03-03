#include <iostream>
using namespace std;
// factorial --> 3! = 3*2*1 
// we can say that it is 1*2*3;
// so instead of printing the reverse loop we can print the normal loop!


void factorial(int n){
    int factor = 1;
    for(int i=1;i<=n;i++){
        factor*=i;
    }

    cout<<factor;
}

int main(){
    factorial(4);

    return 0;
}