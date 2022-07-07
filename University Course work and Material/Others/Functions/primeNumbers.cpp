#include <iostream>
#include <cmath> //cmath
using namespace std;
// prime numbers
// ----> we can reduce the last number to squareroot of number.
// for this purpose we have to import/include math library
static bool isPrimeNumber(int num){
    
    for(int i=2; i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    
        return true;
    }

int main(){
    int num1,num2;
    cout<<"Enter two number as higher and lower limit for which you want prime numbers";
    cin>>num1>>num2;
    for(int i=num1;i<=num2;i++){
        if(isPrimeNumber(i)==true){
            cout<<i<<endl;
        }
    }

    return 0;
}