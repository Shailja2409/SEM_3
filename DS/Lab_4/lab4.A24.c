//24. Write a program to insert a number at a given location in an array.
#include <stdio.h>
int main(){
    int size,n,index,i;

    printf("Enter the size of array:");
    scanf("%d",&size);

    int arr[size+1];
    
    for(i=0; i<size; i++){
        printf("Enter the array element:");
        scanf("%d",&arr[i]);
    }
    
    printf("before:");
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    printf("Enter the number and its index:");
    scanf("%d %d",&n, &index);

    for(i=size-1; i>=index; i--){
        arr[i+1]=arr[i];
    }
    arr[i+1]=n;

    printf("after:");
    for(i=0; i<size+1; i++){
        printf("%d ",arr[i]);
    }
}