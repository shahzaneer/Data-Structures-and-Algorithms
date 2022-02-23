#include <iostream>
using namespace std;


// before drawing patterns keep four things in mind!
// 1 - no of rows (first for loop)
// 2 - no of spacing (second for loop)
// 3 - no of columns (second for loop)
// 4 - elements what you wanna print (it is the thing you print in second loop commonly)
// 5 - line break --> cout<<"\n"; (after the second loop in the body of first loop)

// pattern required!

// 1 
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1


int main(){
    int n = 5;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            
            if((i+j)%2==0){
                cout<<"1 ";
            }
            else if ((i+j)%2==1){
                cout<<"0 ";
            }
        }

        cout<<"\n";
    }

    return 0;
}