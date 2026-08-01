//20. Write a program to find whether the array contains a duplicate number or not.
#include <stdio.h>
int main(){
    int n,i,j,count=0;

    printf("Enter array size:");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++){
            printf("Enter array elements:");
            scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
            }
            
        }
    }

    if(count==2){
        printf("Duplicate Number");
    }
    else{
        printf("No Duplicate Number");
    }
}