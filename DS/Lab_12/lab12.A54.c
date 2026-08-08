// 54. Write a menu driven program to implement following operations on the doubly linked list.
//  Insert a node at the front of the linked list.
//  Delete a node from specified position.
//  Insert a node at the end of the linked list. 
//  Display all nodes. 
#include <stdio.h>
#include <stdlib.h>
struct Node{
    int info;
    struct Node * lptr;
    struct Node * rptr;
};

struct Node * FIRST = NULL;

void Insert_first(int x){   //Insert at Front Node
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->info = x;
    newNode->lptr = NULL;
    newNode->rptr = FIRST;  

    if(FIRST != NULL){
        FIRST->lptr = newNode;
    }
    FIRST = newNode;
}

void Insert_last(int y){    //Insert at End Node
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node * save = FIRST;

    newNode->info = y;
    newNode->rptr = NULL;

    if(FIRST == NULL){  //ONLY ONE NODE
        newNode->lptr = NULL;
        FIRST = newNode;
    }

    while(save->rptr != NULL){
        save = save->rptr;
    }

    save->rptr = newNode;
    newNode->lptr = save;
}

void Delete_first(){    //Delete at Front Node
    struct Node * temp;

    if(FIRST == NULL){
        printf("List is Empty!!");
    }
    else{
        temp = FIRST;
        FIRST = FIRST->rptr;
        FIRST->lptr = NULL;
        free(temp);
    }
}

void Delete_last(){     //Delete at End Node
    struct Node * save = FIRST;
    struct Node * pred = NULL;

    if(FIRST == NULL){
        printf("List is Empty!!");
    }
    else if(FIRST->rptr == NULL){
        free(FIRST);
        FIRST = NULL;
    }

    while(save->rptr != NULL){
        pred = save;
        save = save->rptr;
    }

    pred->rptr = NULL;
    free(save);
}


void delete_k_pos(int k){   //Delete from kth position
    int i;
    struct Node * temp;
    
    if(FIRST == NULL){   //List is Empty
        printf("List is Empty!!");
    }
    
    if(k < 0){ // less than 0 then Invalid
        printf("Invalid Position!!!");
    }
    
    if(k==0){   //1st node to be deleted
        Delete_first();
    }
    
    struct Node * save = FIRST;

    for(int j = 1; j < k; j++){
        if(save == NULL){
            printf("Invalid Postion!!");
        }
        save = save->rptr;
    }

    temp = save->rptr;
    save->rptr = save->rptr->rptr;        
    save->rptr->lptr = save;
    free(temp);
}

void display(){     //Display Node
    struct Node * temp = FIRST;

    while(temp != NULL){
        printf("%d ",temp->info);
        temp = temp->rptr;
    }
    printf("\n");
}

//Main method
int main(){
    Insert_first(40);
    Insert_first(30);
    Insert_first(20);
    Insert_first(10);

    printf("Inserting at first:\n");
    display();

    Insert_last(50);
    Insert_last(60);
    Insert_last(70);
    Insert_last(80);

    printf("Inserting at Last:\n");
    display();

    Delete_first();
    printf("Delete at First:\n");
    display();

    Delete_last();
    printf("Delete at Last:\n");
    display();

    delete_k_pos(3);
    printf("Delete kth position:\n");
    display();

}