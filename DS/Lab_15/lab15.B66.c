#include <stdio.h>
#include <string.h>

    char stack[100];
    char pre[100];
    int top =-1;

    int valuesf(char ch){
        if(ch == '+' || ch == '-'){ return 2; }
        else if(ch == '*' || ch == '/' ){return 4;}
        else if(ch == '^'){ return 5;}
        else if(ch=='('){ return 9; }
        else if(ch==')'){return 0; }
        else{return 7; }
    }

    int valuesg(char ch){
        if(ch == '+' || ch == '-'){ return 1;}
        else if(ch == '*' || ch == '/' ){ return 3; }
        else if(ch == '^'){ return 6; }
        else if(ch=='('){ return 0; }
        else{ return 8; }   
    }

    int rank(char ch){
        if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^'){
            return -1;
        }
        else{
            return 1;
        }
    }

    void prefix(char revinfix[]){
    int i = 0, j = 0, r = 0;
    char ch, temp;

    while (revinfix[i] != '\0'){
        ch = revinfix[i];

        if(top < 0){ 
            printf("Invalid Expression.");
            return;
        }

        while (valuesg(stack[top]) > valuesf(ch)){
            temp = stack[top--];
            pre[j++] = temp;
            r = r + rank(temp);

        if(r < 1){
            printf("Invalid 1\n");
            return;
        }
        }

        if (valuesg(stack[top]) != valuesf(ch)){
            stack[++top] = ch;
        }
        else{
            top--;
        }

        // if (ch != '(' && ch != ')')
        //     r = r + rank(ch);

        i++;
    }

    pre[j] = '\0';

    if (top != -1 || r != 1)
        printf("Invalid 2\n");
    else
        printf("Prefix Expression : %s\n", strrev(pre));
}

int main()
{
    char infix[100],revinfix[100];
    int j=0;

    printf("Enter the infix expression:");
    scanf("%s", infix);
    
    for(int i=strlen(infix) - 1 ; i>=0 ; i--){
        if(infix[i] == ')'){
            revinfix[j++] = '(';
        }
        else if(infix[i] == '('){
            revinfix[j++] = ')';
        }
        else{
            revinfix[j++] = infix[i];
        }
    }

    revinfix[j]='\0';

    stack[++top] = '(';
    strcat(revinfix, ")");

    printf("Infix Expression : %s\n", revinfix);

    prefix(revinfix);

    return 0;
}