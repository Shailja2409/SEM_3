// Insert a node at the front of the linked list.
// Delete a node from specified position.*
// Insert a node at the end of the linked list.
// Display all nodes.
#include <stdio.h>
#include <stdlib.h>
struct Node{
    int info;
    struct Node * link;
};

struct Node * FIRST = NULL;
struct Node * LAST = NULL;

//INSERT AT FIRST 
void insert_first(int x){
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->info = x;

    if(FIRST == NULL){
        newNode->link = newNode;
        FIRST = newNode;
        LAST = newNode;
    }
    else{
        newNode->link = FIRST;
        LAST->link = newNode;
        FIRST = newNode;
    }
}

//INSERT AT LAST
void insert_last(int y){
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->info = y;

    if(FIRST == NULL){
        newNode->link = newNode;
        FIRST = newNode;
        LAST = newNode;
    }
    else if(FIRST == LAST){
        LAST->link = newNode;
        newNode->link = FIRST;
        LAST = newNode;
    }    
    else{
        newNode->link = FIRST;
        LAST->link = newNode;
        LAST = newNode;
    }
}

// DISPLAY NODES
void display(){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node * save  = FIRST;

    while(save->link != FIRST){
        printf("%d ",save->info);
        save = save->link;
    }
     printf("%d ",save->info);
}

int main(){
    insert_first(40);
    insert_first(30);
    insert_first(20);
    insert_first(10);

    printf("Insert at fist:\n");
    display();

    insert_last(50);
    insert_last(60);
    insert_last(70);
    insert_last(80);

    printf("\nInsert at last:\n");
    display();

    return 0;
}