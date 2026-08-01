//41. Write a program to implement a node structure for singly linked list. Read the data in a node, print the node.
#include <stdio.h>
#include <stdlib.h>
struct Node{
    int info;
    struct Node *link;
};

struct Node *first = NULL;

int main(){
    struct Node *newNode,*temp;
    int n;

    printf("Enter size of list:");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){

        newNode = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter number:");
        scanf("%d",&newNode->info);

        newNode->link = NULL;

        temp = first;

        if(first == NULL){
            first = newNode;
        }
        else{
            while (temp->link != NULL){
                temp = temp->link;
            }
    
            temp->link = newNode;
        }
    }

    printf("\nNode Elements:\n");

    temp = first;

    while (temp != NULL){
        printf("%d\n", temp->info);
        temp = temp->link;
    }

    return 0;
}