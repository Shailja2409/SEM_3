// 22. WAP to print Pascal triangle.
#include <stdio.h>
int main(){
    int i,j,n,k;

    printf("Enter the number:");
    scanf("%d",&n);

    int arr[n][n];

    for(i=1; i<=n; i++){
        for(k=1; k<=n-i; k++){
            printf("  ");
        }
        for(j=1; j<=i; j++){
            if(j==1 || j==i){
                arr[i][j] = 1;
                printf("%d ",arr[i][j]);
            }
            else{
                arr[i][j] =arr[i-1][j]+arr[i-1][j-1]; 
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
}