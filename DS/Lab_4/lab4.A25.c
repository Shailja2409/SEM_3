//25. Write a program to delete a number from a given location in an array.
#include <stdio.h>
int main(){
    int size,index,i;

    printf("Enter the size of array:");
    scanf("%d",&size);

    int arr[size];
    
    for(i=0; i<size; i++){
        printf("Enter the array elements:");
        scanf("%d",&arr[i]);
    }
    
    printf("before:");
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    printf("Enter the value of index:");
    scanf("%d", &index);

    for(i=index; i<size-1; i++){
        arr[i]=arr[i+1];
    }
    size--;

    printf("after:");
    for(i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
}