//9. WAP to find power of a number using loop.
#include <stdio.h>
int main(){
    int pow,base,temp=1;

    printf("Enter power and base: ");
    scanf("%d %d",&pow,&base);

    int ans = base;
    for(int i=1;i<pow;i++){
        temp = ans;
        ans = 0;
        for(int j=1;j<=base;j++){
            ans += temp;
        }
    }
    printf("Power of a number: %d",ans);

    return 0;
}