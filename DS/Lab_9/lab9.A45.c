// 45. Write a program to copy a linked list.
# include <stdio.h>
#include <stdlib.h>
struct Node{
    int info;
    struct Node * link;
};

struct Node * FIRST1 = NULL;
struct Node * FIRST2 = NULL;

void insertAtLast1(int x){  //insert at last in first node
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node * save1 = FIRST1;

    newNode->info = x;
    newNode->link = NULL;

    if (FIRST1 == NULL)
    {
        FIRST1 = newNode;
        return;
    }

    while(save1->link != NULL){
        save1 = save1->link;
    }
    save1->link = newNode;
}

void insertAtLast2(int x){  //insert at last in second node by COPYING
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node * save2 = FIRST2;

    newNode->info = x;
    newNode->link = NULL;

    if (FIRST2 == NULL)
    {
        FIRST2 = newNode;
        return;
    }

    while(save2->link != NULL){
        save2 = save2->link;
    }
    save2->link = newNode;
}

void display1(){  //display 1st node
    struct Node *temp = FIRST1;

    while (temp != NULL)
    {
        printf("%d ", temp->info);
        temp = temp->link;
    }
    printf("\n");
}

void copyList(){ //to copy list
    struct Node * save1 = FIRST1;

    while(save1 != NULL){
        insertAtLast2(save1->info);
        save1 = save1->link;
    }
}

void display2(){  //display copied node
    struct Node *temp = FIRST2;

    while (temp != NULL)
    {
        printf("%d ", temp->info);
        temp = temp->link;
    }
    printf("\n");
}


int main(){

    insertAtLast1(10);
    insertAtLast1(20);
    insertAtLast1(30);
    insertAtLast1(40);
    insertAtLast1(50);

    display1();

    printf("Copied Linked List:\n");
    copyList();

    display2();
}