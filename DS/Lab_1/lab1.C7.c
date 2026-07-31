//7. WAP to convert number of days into year, week & days [e.g. 375 days mean 1 year, 1 week and 3 days].
#include <stdio.h>
int main(){

    int days,y,w,d,remainingdays;

    printf("Enter no. of days:");
    scanf("%d",&days);

    y = days/365;
    remainingdays = days%365;
    w = remainingdays/7;
    d = remainingdays%7;

    printf("%d year,%d week,%d days",y,w,d);

    return 0;
}