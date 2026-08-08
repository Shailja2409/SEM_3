// 57. Write a menu driven program to implement following operations on the Stack using an Array
//  PUSH, POP, DISPLAY
//  PEEP, CHANGE
#include <stdio.h>
#include <stdlib.h>

    int stack[5];
    int top = -1;

void push(){
    int x;

    if(top >= 5){
        printf("Stack Overflow!!!\n");
    }
    else{
        printf("\nEnter value for stack:");
        scanf("%d",&x);
        top++;
        stack[top] = x;
    }

}

int pop(){
    if(top == -1){
        printf("Stack underflow\n");
        return -1;
    }
    else{
        printf("\n%d removed\n",stack[top]);
        top--;
    }
}

int peep(){
    int i;

    printf("\nEnter ith element from top:\n");
    scanf("%d",&i);

    if(top-i+1 < 0){
        printf("Element not Available!!");
        return -1;
    }
    else{
        printf("peep element: %d", stack[top-i+1]);
        return stack[top-i+1];
    }
}

int change(){
    int i,x;

    printf("Enter ith element to be changed: ");
    scanf("%d",&i);

    if(top-i+1 < 0){
        printf("Element not available!!!");
    }
    else{
        printf("Enter element to be added: ");
        scanf("%d",&x);

        stack[top-i+1] = x;

        printf("\nchange element: %d", stack[top-i+1]);
        return stack[top-i+1];
    }
}

void display(){
    if(top == -1){
        printf("Stack is Empty!!");
    }
    else{
        printf("\nStack elements: ");
        for(int i = top; i>= 0; i--){
            printf("%d ",stack[i]);
        }
    }
}


int main(){
    int choice;

    while(choice != 6){
        printf("\nEnter a choice (1 to 5):");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            push();
            display();
            break;
        
        case 2:
            pop();
            display();
            break;

        case 3:
            peep();
            break;

        case 4:
            display();
            break;

        case 5:
            change();
            break;
        
        default:
            printf("Invalid choice!!");
            break;
        }
    }
}