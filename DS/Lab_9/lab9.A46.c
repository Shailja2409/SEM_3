//  46. Write a program to reverse a linked list.
# include <stdio.h>
#include <stdlib.h>
struct Node{
    int info;
    struct Node * link;
};

struct Node * FIRST = NULL;

void insertAtFirst(int x){
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->info = x;
    newNode->link = FIRST;

    FIRST = newNode;
}

void display(){
    struct Node * temp = FIRST;

    while(temp != NULL){
        printf("%d ",temp->info);
        temp = temp->link;
    }
    printf("\n");
}

void reverse(){
    struct Node *save = FIRST;
    struct Node *pred = NULL;
    struct Node *succ;

    while(save != NULL){
        succ = save->link;
        save->link = pred;
        pred = save;
        save = succ;
    }

    FIRST = pred;
}

int main(){

    insertAtFirst(10);
    insertAtFirst(20);
    insertAtFirst(30);
    insertAtFirst(40);

    printf("Before Reversing:\n");
    display();

    reverse();

    printf("After Reversing:\n");
    display();
}