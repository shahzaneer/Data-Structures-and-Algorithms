#include <stdio.h>
#include <stdbool.h>

static int sum;


void reverse(int number){
    if(number==0){
        return;
    }

    int rem = number % 10;
    sum = sum * 10 + rem;
    reverse(number/10);
}

bool isPalindrome(int number){
    reverse(number);
    if(sum == number){
        return true;
    }
    return false;
}
int main(){
    // reverse(1234);
    // printf("%d",isPalindrome(1221));
    printf("%d",isPalindrome(177771));

    // printf("%d",sum);
    return 0;
}