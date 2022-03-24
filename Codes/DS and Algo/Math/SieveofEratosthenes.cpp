#include <iostream>
using namespace std;
// Its a mathematical way to better the time complexity while finding the prime numbers in an array
// Approach -> ismay 2 se start krte hain aur uske saaray multiples ko mark krlete hain 
// then 3 k baar 3^2 = 9 se start krke marks krlete hain aur tb tk krte jatay hain
// jb tk kisi element ka square array k members se bara na hojaye jb hojata hai tou jitne bhi unmarked elements hain wo sb k sb Prime houtay hain!

void primeSieve(int n){

    int prime [100] = {0}; // 0 specify krne se prime k ander 0 se initialized hojayengi 
    for(int i = 2; i<=n;i++){
        if(prime[i] == 0){
            for(int j = i*i;j<=n;j+=i){
                prime[j] = 1;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(prime[i] == 0){
            cout<<i<<" "<<endl;
        }
    }

}
int main(){
    primeSieve(50);

return 0;
}