#include <stdio.h>

static int sum;

void reverse(int number){
    if(number==0){
        return;
    }

    int rem = number % 10;
    sum = sum * 10 + rem;
    reverse(number/10);
}
int main(){
    reverse(1234);
    printf("%d",sum);
    return 0;
}