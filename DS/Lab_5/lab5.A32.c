//32. Read two matrices, first 3x2 and second 2x3, 
//perform multiplication operation and store result in third matrix and print it.
#include <stdio.h>
int main(){
    int a[3][2];
    int b[2][3];
    int i,j;
    
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("Enter elements of a:");
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Enter elements of b:");
            scanf("%d",&b[i][j]);
        }
    }

    int c[3][3],k;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j] = 0;
        for(k=0;k<3;k++){
            c[i][j] = c[i][j] + a[i][j] * b[i][j];
            }
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }
}