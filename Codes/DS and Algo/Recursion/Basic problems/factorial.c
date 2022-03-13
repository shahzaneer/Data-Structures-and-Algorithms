#include <stdio.h>

int factorial(int n){
    if(n==1){
        return 1;
    }
    return(n*factorial(n-1));
}
int main(){

    printf("%d",factorial(5));

    return 0;
}

// Wallahi Without the paper work, call stack concepts of function
// concepts of returning . yeh smjh nhi ayega!