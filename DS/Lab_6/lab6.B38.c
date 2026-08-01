//38. WAP to sort the array elements using Pointer.
#include <stdio.h>
int main(){
    int i,j,n,temp;

    printf("Enter size of array:");
    scanf("%d",&n);

    int arr[n];
    int *p = arr;

    for(i=0;i<n;i++){
        printf("Enter array elements:");
        scanf("%d",p+i);
    }

    printf("\n---Original array---\n");
    for(i=0;i<n;i++){
        printf("%d\n",*(p+i));
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }

    printf("\n---Sorted array---\n");
    for(i=0;i<n;i++){
        printf("%d\n",*(p+i));
    }
}