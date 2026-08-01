//26. Write a program to insert a number in an array that is already sorted in an ascending order.
#include <stdio.h>
int main(){
    int size,n,i;

    printf("Enter the size for array:");
    scanf("%d",&size);

    int arr[size+1];

    printf("<-- Enter sorted array element -->\n");
    for(i=0; i<size; i++){
        printf("Enter the array element:");
        scanf("%d",&arr[i]);
    }
    
    printf("before:");
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    printf("Enter the value of number:");
    scanf("%d",&n);

    while (arr[i]>n){
      arr[i+1]=arr[i];  
      i--;
    }
    arr[i+1]=n;

    printf("after:");
    for(i=0; i<size+1; i++){
        printf("%d ",arr[i]);
    }   
}