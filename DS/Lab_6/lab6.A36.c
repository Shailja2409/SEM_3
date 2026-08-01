//36. WAP to calculate the sum of n numbers using Pointer.
#include <stdio.h>
int main(){
    int i,n,sum=0;

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

    for(i=0;i<n;i++){
        sum += *(p+i);
    }

    printf("\nSum is: %d",sum);
}