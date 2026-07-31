//1. WAP to calculate area of a Circle (A = πr2).
#include <stdio.h>
int main(){
    float area,r;

    printf("Enter radius:");
    scanf("%f",&r);

    area = 3.14*r*r;

    printf("Area: %f",area);

    return 0;
}