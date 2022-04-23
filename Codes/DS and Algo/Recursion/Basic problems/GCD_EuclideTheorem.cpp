#include <iostream>
using namespace std;

//* Euclide Theorem --> It is used to find the greatest Common Divisor (GCD)
//  For Example we are give two numbers 4 , 6
// firstly finding their Common Divisors
// 4 = 4,2,1
// 6 = 6,3,2,1

// Greatest common divisor is 2
// Euclide theorem helps us to find an easy way for GCD

int GCD(int a, int b);

int main()
{
    int a, b;
    cout << "Enter two Numbers for finding their GCD" << endl;
    cout << "Enter first number " << endl;
    cin >> a;
    cout << "Enter Second number " << endl;
    cin >> b;

    cout<<"The GCD is : "<<GCD(a, b);
    return 0;
}

int GCD(int a , int b){
    if(a==b)
        return a;
    if(a%b==0)
        return b;
    if(b%a == 0)
        return a;
    if(a>b){
        return GCD(a % b, b);
    }
    else{
        return  GCD(a, b % a);
    }

}