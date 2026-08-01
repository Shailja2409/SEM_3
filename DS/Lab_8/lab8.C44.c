// 44. Write a program to remove the duplicates nodes from given sorted Linked List.
// Input: 1 → 1 → 6 → 13 → 13 → 13 → 27 → 27
// Output: 1 → 6 → 13 → 27
#include <stdio.h>
#include <stdlib.h>
struct Node{
    int info;
    struct Node * link;
};

struct Node *FIRST = NULL;

void insertInNode(int x){
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->info = x;
    newNode->link = FIRST;

    FIRST = newNode;
}

void duplicate(){
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node * save = FIRST;
    struct Node * temp;
    
    while(save != NULL && save->link != NULL){
        if(save->info == save->link->info){
            temp = save->link;
            save->link = save->link->link;
            free(temp);
        }
        else{
            save = save->link;
        }
    }
}

void display(){
    struct Node *temp = FIRST;

    while (temp != NULL)
    {
        printf("%d ", temp->info);
        temp = temp->link;
    }
    printf("\n");
}

int main(){

    insertInNode(10);
    insertInNode(10);
    insertInNode(20);
    insertInNode(20);
    insertInNode(20);
    insertInNode(30);
    insertInNode(30);

    printf("Before removing duplicates:\n");
    display();

    duplicate();

    printf("After removing duplicates:\n");
    display();
    
    return 0;
}