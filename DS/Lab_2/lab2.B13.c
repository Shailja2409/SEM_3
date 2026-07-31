//13. WAP to print prime numbers between given interval.
#include <stdio.h>
int main(){

    int a,b,isPrime;

        printf("Enter a starting point:");
        scanf("%d",&a);

        printf("Enter a ending point:");
        scanf("%d",&b);

        for(int i=a;i<=b;i++){
            if(i<2){
                continue;
            }
            isPrime = 1;

            for(int j=2;j<=i/2;j++){
                if(i%j==0){
                    isPrime = 0;
                    break;
                }
            }

            if(isPrime){
                printf("%d\n", i);
            }
        }

        return 0;
}