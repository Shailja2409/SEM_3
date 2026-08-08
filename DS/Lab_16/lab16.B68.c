#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int stack[100];
int top =-1;

void push(int ch){
    stack[++top] = ch;
}

int pop(){
    return stack[top--];
}

void operation(int ch, int op1, int op2){
    int value;

    if(ch == '+'){
        value = op1 + op2;
        push(value);
    }

    else if(ch == '-'){
        value = op1 - op2;
        push(value);
    }

    else if(ch == '*'){
        value = op1 * op2;
        push(value);
    }

    else if(ch == '/'){
        value = op1 / op2;
        push(value);
    }

    else if(ch == '^'){
        value = pow(op1,op2);
        push(value);
    }

    else{
        printf("Invalid choice");
    }
}

int evaluate_postfix(char postfix[]){
    int op1,op2;

    int len = strlen(postfix);

    for(int i = 0; i < len; i++){
        if(isdigit(postfix[i])){
            push(postfix[i] - '0');
        }
        else{
            op1 = pop();
            op2 = pop();
            operation(postfix[i],op1,op2);
        }
    } 

    return pop();
}


int main(){

    int ch;
    char postfix[50];

    printf("Enter a string:");
    scanf("%s", postfix);

    strrev(postfix);

    int result = evaluate_postfix(postfix);

    printf("Result = %d", result);
}