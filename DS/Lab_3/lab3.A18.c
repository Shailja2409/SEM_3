//18. Write a program to calculate average of first n numbers.
#include <stdio.h>
int main(){
    int n,sum=0,average;
    printf("Enter array size:");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++){
        printf("Enter array elements:");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        sum+=a[i];
    }

    average = sum/n;

    printf("Sum: %d\n",sum);
    printf("Average: %d",average);

    return 0;
}