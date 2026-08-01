//27. Write a program to delete a number from an array that is already sorted in an ascending order.
#include <stdio.h>
int main(){
    int size,n,i,j;

    printf("Enter the size of array:");
    scanf("%d",&size);

    int arr[size];
    
    printf("<-- Enter sorted array element -->\n");
    for(i=0; i<size; i++){
        printf("Enter the array elements:");
        scanf("%d",&arr[i]);
    }
    
    printf("before:");
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    printf("Enter the value to be deleted:");
    scanf("%d", &n);

    for(i=0; i<size; i++){
        if(arr[i]==n){
            arr[i]=arr[i+1];  
        }
    }
    // size--;

    printf("after:");
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
}