//59. How stack can be used to recognize strings aca, bcb, abcba, abbcbba?
// Write a program to solve the above problem.
#include <stdio.h>
#include <stdlib.h>
    int S[100];
    int top = 0;
    
void main(){
    int i = 0;
    char x,next;

    S[top] = 'c';

    char str[10];

    printf("Enter string: ");
    scanf(" %s", str);

    // for(int i=0;str[i]!='\0';i++)
    // {
    //     printf("%c", str[i]);
    // }

    // printf("\n");

    // printf("%s", str);

    while(str[i] != 'c'){
        next = str[i];
        
        if(next == '\0'){
            printf("Invalid 1\n");
            return;
        }
        else{
            top++;
            S[top] = str[i];
        }
        i++;
    }

    i++;    // to skip c 

    for(int i=top;i>=0;i--)
    {
        printf("%c", S[i]);
    }

    printf("\n");

    // printf("%c", str[i]);

    while(S[top] != 'c'){
        next = str[i];
        x = S[top];

        // printf("next=%c\n", next);
        // printf("x=%c\n", x);
        top--;

        if(next != x){
            printf("Invalid 2\n");
            return;
        }
        i++;
    }

    next=str[i];
    if(next == '\0'){
        printf("Valid\n");
    }
    else{
        printf("Invalid 3");
    }
}