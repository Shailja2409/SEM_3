#include <stdio.h>
    int S[50];
    int top = -1;

void main(){
    char s[50],temp;
    int i,count_a = 0,count_b = 0;

    printf("Enter a string having a and b:");
    scanf(" %s",s);

    for(i = 0; s[i] != '\0'; i++){
        if(s[i] != 'a' || s[i] != 'b'){
            return;
        }
        else if(s[i] == 'a'){
            S[++top] = s[i];
            printf("%c\n",S[top]);
            count_a++;
            printf("%d\n",count_a);

        }
        else if(s[i] == 'b'){
            temp = S[top--];
            printf("%c\n",s[i]);
            count_b++;
            printf("%d\n",count_b);

        }
    }

    if(top == -1 && (count_a == count_b)){
        printf("valid");
    }
    else{
        printf("Invalid");
    }

}