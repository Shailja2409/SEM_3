//58. Write a program to implement stack using singly linked list.
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int info;
    struct Node * next;
};

struct Node * top = NULL;

void stack_push(int x){
    int i;
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));
    
    if(newNode == NULL){
        printf("Stack overflow!");
    }
        
    newNode->info = x;
    newNode->next = top;
    top = newNode;  
}

void stack_pop(){
    if(top == NULL){
        printf("Stack underflow!!");
    }

    struct Node * temp = top;

    top = top->next;
    free(temp);
}

void display(struct Node *top){
    struct Node * temp = top;

    if(top == NULL){
        printf("List is Empty!!!");
    }

    while(temp != NULL){
        printf("%d ",temp->info);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    int n,x;

    printf("Enter size of list: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &x);
        stack_push(x);
    }

    printf("Stack elements:\n");
    display(top);

    stack_pop();

    printf("Stack elements:\n");
    display(top);

}