#include <iostream>
using namespace std;

static double sumOfFirstN(int n){
    double sum = ((n)*(n+1))/2;
    return sum;
}
int main(){
    double sum_er = sumOfFirstN(3);
    cout<<sum_er<<endl;

return 0;
}