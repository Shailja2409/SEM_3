//12. WAP to check whether a number is prime or not.
#include <stdio.h>
int main(){

    int n,flag=1;

    printf("Enter a number:");
    scanf("%d",&n);

    for(int i=2;i<n-1;i++){
        if(n%i==0){
            flag=0;
        }
    }

    if(flag==1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }

    return 0;
}