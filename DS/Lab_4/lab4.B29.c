//29. Write a program to merge two unsorted arrays.
#include <stdio.h>
int main(){
    int n,m,k=0,i;

    printf("Enter the size of n and m:");
    scanf("%d %d",&n ,&m);

    int a[n];
    int b[m];

    printf("<-- Enter the first array element -->");
    printf("\n");
    for(i=0; i<n; i++){
        printf("enter the array element:");
        scanf("%d",&a[i]);
    }


    printf("<-- Enter the secound array element -->");
    printf("\n");
    for(i=0; i<m; i++){
        printf("enter the array element:");
        scanf("%d",&b[i]);
    }

    //display first array
    printf("First array:");
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }

    printf("\n");

    //display second array
    printf("Second array:");
    for(i=0; i<m; i++){
        printf("%d ",b[i]);
    }

    int c[n+m];

    for(i=0; i<n; i++){
        c[k]=a[i];
        k++;
    }

    for(i=0; i<m; i++){
        c[k]=b[i];
        k++;
    }

    printf("\n");

    printf("Merged array:");
    for(i=0; i<(n+m); i++){
        printf("%d ",c[i]);
    }
}