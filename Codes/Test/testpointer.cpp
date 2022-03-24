#include <iostream>
using namespace std;
int main(){
int *arr = new int;
*(arr+1) = 9;

// *(arr+2) = 10
// *(arr+3) = 11
// *(arr+4) = 12
// *(arr+5) = 13
// *(arr+6) = 13
// cout<<*(arr)<<endl;
For(int i = 0;i<1;i++){
    cout<<*(arr+i)<<endl;
}

return 0;
}