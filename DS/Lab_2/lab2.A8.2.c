//8. WAP to find factorial of a number. (Using recursion)
#include <stdio.h>
int fact(int n);
int main(){
    int a=5 ,fact=1;

    printf("Factorial of %d: ",fact);
    return 0;
}
int fact(int n){
    if(n==1)
        return 1;
    else{
        return n * (fact(n-1));
    }
}
    
