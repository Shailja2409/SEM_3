//37. WAP to find the largest element in the array using Pointer.
#include <stdio.h>
int main(){
    int i,n;

    printf("Enter size of array:");
    scanf("%d",&n);

    int arr[n];
    int *p = arr;

    for(i=0;i<n;i++){
        printf("Enter array elements:");
        scanf("%d",p+i);
    }

    for(i=0;i<n;i++){
        printf("%d\t",*(p+i));
    }

    int *largest = p+i;

    for(i=0;i<n;i++){
        if(*largest < *(p+i)){
            *largest = *(p+i);
        }
    }

    printf("\nLargest no.: %d",*largest);
}