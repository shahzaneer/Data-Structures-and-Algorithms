#include <iostream>
using namespace std;

// implementing array as An ADT through DMA.
struct myArray{
    int total_size;
    int used_Size;
    int *p;

    void createArray(myArray *ptr , int tSize , int uSize){

        // Structure k object ka address hoga is pointer main tou ager isko indirection 
        // symbol lgaaden tou yeh bn jayega object.
        // (*ptr).total_size = tSize;
        // (*ptr).used_Size = uSize;
        // (*ptr).p = new int [tSize];

        // yeh wala kaam hum -> operator se bhi krskte hain.
        // yani ager kisi object ka pointer ho tou usse indirection operator laga kr object bananay ki bajaye -> use krskte hain.
        ptr -> total_size = tSize;
        ptr -> used_Size = uSize;
        ptr -> p = new int [tSize];

        cout<<"Your Array has been created!"<<endl;
    }

    void setValues(myArray *ptr){

        for(int i=0;i<ptr->used_Size;i++){
            cout<<"Enter Value at"<< i << "index "<<endl;
            // cin>>((*(ptr)).p)[i];
            cin>>ptr->p[i];
        }
    }

    void showValues(myArray *ptr){

        for(int i=0;i<ptr->used_Size;i++){
            cout<<((*ptr).p)[i]<<endl;
            // object.pointer[0];
        }

    }

    void showAddresses(myArray *ptr){

        for(int i=0;i<ptr->used_Size;i++){
            cout<<((*ptr).p + i)<<endl;
        }
    }

};

int main(){

    myArray marks; //object creation of structure myArray
    marks.createArray(&marks,10,5);
    marks.setValues(&marks);
    marks.showValues(&marks);
    marks.showAddresses(&marks);

    // cout<<*(marks.p)<<endl; //it contains the first element
    delete []marks.p;
    
    return 0;
}