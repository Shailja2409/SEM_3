//43. WAP to check whether 2 singly linked lists are same or not.
#include<stdio.h>
#include <stdlib.h>
struct Node{
    int info;
    struct Node *link;
};

struct Node *FIRST1;
struct Node *FIRST2;

void insertAtFirst1(int x){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->info = x;
    newNode->link = FIRST1;

    FIRST1 = newNode;
    return;
}

void insertAtFirst2(int y){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->info = y;
    newNode->link = FIRST2;

    FIRST2 = newNode;
    return;
}

void checkSame(int x,int y){
    struct Node * save1 = FIRST1;
    struct Node * save2 = FIRST2;
    int is_same = 1;

    while(save1 != NULL && save2 != NULL){
        if(save1->info != save2->info){
            is_same = 0;
            break;
        }
        else{
            save1 = save1->link;
            save2 = save2->link;
        }
    }

    if(save1 == NULL && save2 == NULL && is_same == 1){
        printf("Same");
    }
    else{
        printf("Not Same");
    }
}

int main(){
    int x,y;

    printf("Enter value of x:");
    scanf("%d",&x);

    printf("Enter value of y:");
    scanf("%d",&y);

    insertAtFirst1(x);
    insertAtFirst2(y);
    checkSame(x,y);
}


