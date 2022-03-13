#include <iostream>
using namespace std;

void concept(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }

    cout<<n<<endl;
    // concept(n--); //Stack-overflow Error because it will pass the n first and then decrement it by one.
    concept(--n);
}
int main(){
    concept(5);

    return 0;
}