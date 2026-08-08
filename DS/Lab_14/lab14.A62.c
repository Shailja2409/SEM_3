#include <stdio.h>
    char S[50];
    int top = -1;

int main(){
    char s[50];
    int i;

    printf("Enter a string with * in it:");
    scanf(" %s", s);

    printf("<-----Original STACK: ----->\n");
    printf("%s",s);

    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == '*'){
            if(top != -1){
                top--;  //pop the ellement before '*' from the stack
            }
        }
        else{
            S[++top] = s[i];    //if not '*' then push in stack
        }
    }

    printf("\n<----- RESULT STACK: ----->\n");
    for (i = 0; i <= top; i++) {
        printf("%c",S[i]);
    }
}