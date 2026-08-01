//21. Read n numbers in an array then read two different numbers, 
//replace 1st number with 2nd number in an array and print its index and final array.
#include <stdio.h>
int main(){
    int n,n1,n2,i;

    printf("Enter the size of array:");
    scanf("%d", &n);
    
    int arr[n];
    
    for (i = 0; i < n; i++){
        printf("Enter array elements:",i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the two number:");
    scanf("%d %d",&n1 ,&n2);

    for(i=0; i<n; i++){
        if(arr[i]==n1){
            arr[i]=n2;
            printf("index:%d \n",i);
        }
    }

    printf("\n");

    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}