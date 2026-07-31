//15. WAP to print Armstrong number from 1 to 1000.
#include <stdio.h>
#include <math.h>
int main(){
    int i;

    for(int i=1;i<=1000;i++){
        int temp = i;
        int count = 0;
        int ans = 0,digit;

        while (temp!=0){
         count++;
         temp/=10;
        }
        temp = i;

        while(temp != 0){
            digit = temp%10;
            ans+= pow(digit,count);
            temp/=10;
        }

        if(ans == i){
            printf("%d\n",i);
        }
    }
}