//16. Write a program to read and display n numbers using an array.
#include <stdio.h>
int main(){
    int n;

    printf("Enter array size:");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter array elements:");
        scanf("%d",&arr[i]);
    }

    printf("Array elements:\n");

    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}