// 71. Write a program to implement queue using singly linked list.
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node * link;
};

struct Node *F = NULL;
struct Node *R = NULL;

void enqueue(int x){
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->info = x;
    newNode->link = NULL;

    if(R == NULL){
        F = R = newNode;
    }
    else{
        R->link = newNode;
        R = newNode;
    }
}

void dequeue(){
    if(F == NULL){
        printf("Queue UNDERFLOW!");
        return;
    }

    if(F == R){
        free(F);
        F = R = NULL;
        return;
    }

    else{
        struct Node * temp = F;
        F = F->link;
        free(temp);
    }
}

void display(){
    struct Node* temp = F;

    if(F == NULL){
        printf(" Queue is EMPTY!");
    }

    while(temp != NULL){
        printf("%d ", temp->info);
        temp = temp->link;
    }
}

int main(){
    int x,i,n;

    printf("Size of Queue:");
    scanf("%d",&n);

    printf("Elements of queue:\n");
    for(i = 0; i < n; i++){
        scanf("%d",&x);
        enqueue(x);
    }

    printf("Elements in Queue: ");
    display();

    dequeue();

    printf("\nAfter deleted:");
    display();

    return 0;
}