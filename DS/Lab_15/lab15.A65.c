#include <stdio.h>
#include <string.h>

    char stack[100];
    char post[100];
    int top =-1;

    int valuesf(char ch){
        if(ch == '+' || ch == '-'){ return 1; }
        else if(ch == '*' || ch == '/' ){return 3;}
        else if(ch == '^'){ return 6;}
        else if(ch=='('){ return 9; }
        else if(ch==')'){return 0; }
        else{return 7; }
    }

    int valuesg(char ch){
        if(ch == '+' || ch == '-'){ return 2;}
        else if(ch == '*' || ch == '/' ){ return 4; }
        else if(ch == '^'){ return 5; }
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

    void postfix(char infix[]){
    int i = 0, j = 0, r = 0;
    char ch, temp;

    if(top < 0){ 
            printf("Invalid Expression.");
            return;
        }

    while (infix[i] != '\0'){
        ch = infix[i];

        while (valuesg(stack[top]) > valuesf(ch)){
            temp = stack[top--];
            post[j++] = temp;
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

    post[j] = '\0';

    if (top != -1 || r != 1)
        printf("Invalid 2\n");
    else
        printf("Postfix Expression : %s\n", post);
}

int main()
{
    char infix[100];

    printf("Enter the infix expression:");
    scanf("%s", infix);

    stack[++top] = '(';
    strcat(infix, ")");

    printf("Infix Expression : %s\n", infix);

    postfix(infix);

    return 0;
}