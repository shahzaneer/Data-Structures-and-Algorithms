#include <iostream>
using namespace std;

int isPalindrome(int n){
    int num = n;
    int newN = 0;
    int rem;
    while(n!=0){
        rem = n%10;
        newN = newN * 10 + rem;
        n = n/10;
    }

    if(num == newN) return 1;
    else return 0;
}

int main(){
cout<<"The number "<<isPalindrome(1221);
    return 0;
}