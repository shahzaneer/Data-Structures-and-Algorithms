#include <iostream>
using namespace std;
// before making pattern of any kind do the necessary paper (make algorithm)
// then proceed!

static void zigzag(){

    //    *   *
    //  *  * *  * 
    // *    *     *
    for(int rows = 1; rows<=3;rows++){
            for(int columns = 1; columns<=9;columns++){
                if(((rows+columns)%4==0) || (rows==2 && columns==4)|| (rows==2 && columns==8)){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }

            }
            cout<<"\n";
        }
}

int main(){
    zigzag();


    return 0;
}