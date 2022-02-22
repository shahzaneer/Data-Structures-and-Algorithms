#include <iostream>
using namespace std;

static int factorial(int n){
    int factor = 1;
    for(int i=1;i<=n;i++){
        factor = factor * i;
    }

    return factor;
}

int main(){
    cout<<"Enter n and r for combination nCr";
    int n,r;
    cin>>n>>r;
    double combination;
    combination = (factorial(n)/factorial(r)*(factorial(n-r)));
    cout<<combination;

}