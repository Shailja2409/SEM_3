//35. WAP to get and print the array elements using Pointer.
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
        printf("%d",*(p+i));
    }
}