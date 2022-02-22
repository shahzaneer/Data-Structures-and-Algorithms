#include <iostream>
using namespace std;
static int factorial(int n){
    int factor = 1;
    for(int i=2;i<=n;i++){
        factor*=i;
    }

    return factor;
}
static void pascalTriangle(){
    // 1
    // 1 1
    // 1 2 1
    // 1 3 3 1
    // 1 4 6 4 1

    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<(factorial(i))/(factorial(j)*factorial(i-j))<<" ";

        }
        cout<<"\n";
    }
}

int main(){
    pascalTriangle();
return 0;
}