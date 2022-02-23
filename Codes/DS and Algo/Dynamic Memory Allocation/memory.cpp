#include <iostream>
using namespace std;
// dynamic memory allocation --> 
// dynamic --> khud se (control hasil krna)
// memory allocation --> memory ko allocate krna.
// cpp main hun khud se memory declare krskte hain aur isse delete bhi krskte hain 
// allocate krne k liay new aur khtm krne k liay delete keyword hain

int main(){
    int *pointerVar;

    pointerVar = new int;
    //yani main keh rha hun k pointerVar ki
    //jo value hai na uske liay aik int data type
    //ki memory allocate krdo!

    *pointerVar = 45; //yani value main 45 rkhdo
    // yun hmne aik new variable declare kiay bagair pointer main value di hai

    // ! chad cpp

    cout<<"The value of pointer is "<<*pointerVar<<endl;
    cout<<"the addrress of pointer is "<<pointerVar<<endl;

    // now we can also delete the memory allocated by using delete keyword

    delete pointerVar; //isne memory ko khtm krdia hai 

    cout<<*pointerVar<<endl; 

//it will generate a garbage value q k jo 
//  hmne memory allocate ki thi usse delete krdia hai






    return 0;
}