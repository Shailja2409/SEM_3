//4. WAP to find the largest among the given three numbers by user.
#include <stdio.h>
int main(){

    int a,b,c,ans;

    printf("Enter 3 numbers:");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c){
        printf("a is largest.");
    }
    else{
        if(b>a && b>c){
            printf("b is largest.");
        }
        else{
            printf("c is largest.");
        }
    }

    return 0;
}