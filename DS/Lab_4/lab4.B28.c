//28. Write a program to delete duplicate numbers from an array.
#include <stdio.h>
int main(){
    int n,i,j,k,temp;

    printf("Enter the size of array:");
    scanf("%d",&n);

    int arr[n];

    for(i=0 ;i<n; i++){
        printf("Enter the array element:");
        scanf("%d",&arr[i]);
    }

    printf("before:");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
              temp=arr[j];               
              arr[j]=arr[j+1];
              arr[j+1]=temp; 
            }
        }
    }

    printf("\nafter:");
    for(i=0; i<n-1; i++){
        printf("%d ",arr[i]);
    }
}