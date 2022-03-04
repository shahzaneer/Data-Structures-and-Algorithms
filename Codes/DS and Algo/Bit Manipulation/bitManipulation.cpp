#include <iostream>
using namespace std;

// bit manipulation --> bit level per operators perform krte hain
// |(or) &(and) ^(xor) ~(toggle/1's complement)
// << (left shift)
// >> (right shift)
//  >>> (triple right shift)

// get bit --> pta lgana k kisi makhsoos jageh bit ki value kia hai.
// iske liay bit masking use hoti hai jismay hum aik variable generate krte hain jiski makhoos term per (jis term per bit find krni houti hai)
// phir binary bit operators k through pta lgatay hain k kia value ayegi

int getBit(int n,int position){
//* aik number ki binary k different positions per bits find krni hain kaaya 1 hain k zero.

    int masking_n = (1<<position);
     // 1 ki binary hai 00000001 jitne bhi left shift karengay utne right main 0 aajayengay
    if((n & masking_n)!=0){
        return 1;
    }
    return 0;
}

int setBit(int n , int position){
    // set krne ka mtlb hai k di gyi position per 1 hona chahiay.
    // 1 powerful houta hai or k case main tou yahan | use hoga 

    int masking_n = (1<<position);
    return ((n | masking_n)); 

    // n ki binary main jo position hai wahan 1 aajayega.
}

int unsetBit(int n , int position){
    int masking_n = ~(1<<position); // 0001 & 0101 krdia jaye tou 0th position per 1 hi aajayega is liay pehle yahan ~(toggle krdena hai)
    return (n & masking_n);
}

int main(){
    // cout<<getBit(5,2);
    // cout<<setBit(5,1); //0101 houta hai 5 , 1 position 0 ki jageh hai jahan 1 krna hai set . ager krdia jaye tou 111 hogi binary jo k 7 hai.
    cout<<unsetBit(5,0); //0101 houta hai 5 , 0 position is 1 from right side jisse 0 krdena hai tou 100 hoga jo k 4 hai.
    
    return 0;
}