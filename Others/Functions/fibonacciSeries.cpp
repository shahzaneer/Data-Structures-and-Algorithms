#include <iostream>
using namespace std;
// fibonacci series --> 1st term is 0 and the second term is 1 next consecuitive terms are the sum of last two terms
// 0 1 1 2 3 5 8 .. ....

void fib(int n){
    int firstTerm = 0, secondTerm = 1;
    int nextTerm;

    for(int i=1;i<=n;i++){
        cout<<firstTerm<<endl;
        nextTerm = firstTerm+secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }
}


int main(){
    int n;
    cout<<"Enter how many fibonacci series members do you want to print :\n";
    cin>>n;
    fib(n);

    return 0;
}