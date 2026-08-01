//17. Write a program to calculate sum of numbers from m to n.
#include <stdio.h>
int main(){
    int n,m;
    printf("Enter value of n:");
    scanf("%d",&n);

    printf("Enter value of m:");
    scanf("%d",&m);

    int size = n-m+1;
    int temp = m;
    int arr[size],sum=0;

    for(int i=0;i<size;i++){
        printf("Ener array elements:");
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<size;i++){
        arr[i] = temp;
        temp++;
    }

    for(int i=0;i<size;i++){
        sum+=arr[i];
    }

    printf("%d",sum);

    return 0;
}