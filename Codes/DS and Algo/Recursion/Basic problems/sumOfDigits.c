#include <stdio.h>


int sumOfDigits(int number){

    if(number == 0){
        return 0;
    }
    
    return ((number%10) + sumOfDigits(number/10));

}
int main(){
    printf("%d",sumOfDigits(1321));
    return 0;
}