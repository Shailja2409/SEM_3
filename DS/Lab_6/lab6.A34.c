//34. WAP to allocate and de-allocate memory for int, char and float variable at runtime.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *a = (int*)malloc(sizeof(int));
    float *b = (float*)malloc(sizeof(float));
    char *c = (char*)malloc(sizeof(char));

    printf("Enter an Integer:");
    scanf("%d",a);

    printf("Enter Floating number:");
    scanf("%f",b);

    printf("Enter Character:");
    scanf(" %c", c);

    printf("%d\n",*a);
    printf("%f\n",*b);
    printf("%c\n",*c);

    free(a);
    free(b);
    free(c);
}