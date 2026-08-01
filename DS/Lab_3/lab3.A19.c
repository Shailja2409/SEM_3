// 19. Write a program to find position of the smallest number & the largest number from given n numbers.
#include <stdio.h>
int main(){
    int n,i;

    printf("Enter size of an array:");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++){
        printf("Enter array elements:");
        scanf("%d",&arr[i]);
    }

    int largest = arr[0];
    int smallest = arr[0];
    int lp,sp;

    for(i=0;i<n;i++){
        if(largest < arr[i]){
            largest = arr[i];
            lp = i;
        }
        if(smallest > arr[i]){
            smallest = arr[i];
            sp = i;
        }
    }

    printf("Position of largest number is %d\n",lp);
    printf("Position of smalllest number is %d",sp);
}