//31. Read two 2x2 matrices and perform addition of matrices into third matrix and print it
#include <stdio.h>
int main(){
    int a[2][2];
    int b[2][2];
    int c[2][2];
    int i,j;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter elements of a:");
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter elements of b:");
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }
}