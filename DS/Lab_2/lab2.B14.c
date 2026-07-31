//14. WAP to find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4)+ …+(1+2+3+4+….+n).
#include <stdio.h>
int main(){

    int n,ans;

    printf("Enter a number:");
    scanf("%d",&n);

    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            ans = (n*(n+1))/2;
        }
    }

    printf("%d",ans);

    return 0;
}