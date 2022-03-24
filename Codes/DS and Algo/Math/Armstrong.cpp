#include <iostream>
#include <cmath>
using namespace std;
//* What is an Armstrong Number?
//  A number is thought of as an Armstrong number
//   if the sum of its own digits raised to the power 
//   number of digits gives the number itself. 
//   For example, 0, 1, 153, 370, 371, 407 are 
//   three-digit Armstrong numbers and,
// 1634, 8208, 9474 are
// four-digit 
// Armstrong numbers and there are many more.
int countDigit(int n){
    int count = 0;
    while(n!=0){
        n = n/10;
        count++;
    }
    return count;
}
int isArmStrongNumber(int n){
    int num = n;
    int rem;
    int newN = 0;
    while(num!=0){
        rem = num%10;
        newN = newN + round(pow(rem,countDigit(n)));
        num = num/10;
    }
    if(n==newN){
        return 1;
    } 
    else return 0;
}
int main(){

cout<<isArmStrongNumber(153);
return 0;
}

// We have to include cmath for this
// pow (base , index) --> return a double value
// round function converts the double into int