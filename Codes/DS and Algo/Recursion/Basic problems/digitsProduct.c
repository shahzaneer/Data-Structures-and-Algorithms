#include <stdio.h>


int productOfDigits(int number){

    if(number%10 == number){
        // yani number aik hi reh gya ho!
        return 1;
    }
    
    return ((number%10) * productOfDigits(number/10));

}
int main(){
    printf("%d",productOfDigits(1301));
    return 0;
}