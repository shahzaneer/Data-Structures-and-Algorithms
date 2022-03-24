#include <iostream>
using namespace std;
// Trailing zeros --> wo zeros jo last main aatay hon
// koi bhi zero 2*5 ki waja se generate houta hai
// 2 beech main bht ayengay tou hum jinte 5 ayengay un k hisaab se krlengay isse manipulate
// catch is 5*5 = 25 main 2 5 aatay hain 125 main 3 5 hain tou inka khayal rkhna hai

int factorial(int n){
    // is function ki majburi hai aik 
    // int main max 7 digits aaskte hain ager hum long lete hain tou uske aatay hain 
    // 18 digits isse zyada nhi aaaskte ismay isliay neechay di hui technique is the best to find the trailing zeros!
    
    if(n==1){
        return 1;
    }
    return (n*(factorial(n-1)));
}
int main(){
    int n;
    cin>>n;
    int result;
    for(int i=5;i<=n;i=i*5){
        result = result + n/i;
    }

cout<<"The number of trailing zeros are "<<result<<endl;
cout<<"THe factorial is "<<factorial(n)<<endl;

return 0;
}