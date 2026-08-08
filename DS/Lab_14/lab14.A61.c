#include <stdio.h>
    char S[50];
    int top = -1;

void main(){
    char s[50],temp;
    int i;

    printf("Enter string of parenthesis:");
    scanf(" %s",s);

    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            top++;
            S[top] = s[i];
        }
        else{
            if(S[top] == -1){
                return;
            }
            else if((s[i] == ')' && S[top] == '(') ||
               (s[i] == '}' && S[top] == '{') ||
               (s[i] == ']' && S[top] == '[') ){
                temp = S[top--]; //match found then pop
            }
            else{
                printf("Invalid");
                return;
            }
        }
    }

    if(top == -1) //check for empty stack
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }

    return;
}