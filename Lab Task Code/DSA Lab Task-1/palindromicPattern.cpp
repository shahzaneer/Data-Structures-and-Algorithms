#include <iostream>
using namespace std;

static void palindrome_2(){

//    1
//   212 
//  32123
// 4321234
//543212345

    for(int rows = 1; rows<=5;rows++){
            // * spaces
            for(int spaces = 1;spaces<=5-rows;spaces++){
                cout<<" ";
            }
             // * decreasing_order
            for(int columns = rows;columns>=1;columns--){
                cout<<columns;
            }

            // * increasing_order
            for(int columns = 2; columns<=rows;columns++){
                cout<<columns;
            }
            cout<<"\n";
    }


}
static void palindrome_1(){

//    1
//   121 
//  12321
// 1234321
// 123454321

    for(int rows = 1; rows<=5;rows++){
            // * spaces
            for(int spaces = 1;spaces<=5-rows;spaces++){
                cout<<" ";
            }
            // * increasing_order
            for(int columns = 1; columns<=rows;columns++){
                cout<<columns;
            }
            // * decreasing_order
            for(int columns = rows-1;columns>0;columns--){
                cout<<columns;
            }

            cout<<"\n";
    }

}

    int main(){
    // palindrome_1();
    palindrome_2();
    return 0;

    }
