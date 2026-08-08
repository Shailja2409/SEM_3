// 73. Write a menu driven program to implement following operations on the Doubled Ended Queue using an Array:
// Insert at front end, Insert at rear end (Enqueue)
// Delete from front end (Dequeue), Delete from rear end
// Display all elements of the queue
#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int queue[MAX];
int F = -1, R = -1;

void dqinsert_R(int x){      //Enqueue
    if(R >= MAX -1){
        printf(" Queue OVERFLOW!");
        return;
    }
    else{
        if( F == -1){
            F = R = 0;
            queue[F] = x;
        }
        else{
            R++;
            queue[R] = x;
            return;
        }
    }
}

void dqdelete_F(){           //Dequeue
    int y;

    if(F == -1){
        printf(" Queue UNDERFLOW!");
        return;
    }
    else{
        y = queue[F];
        printf("\nDeleted Element: %d\n", y);

        if(F == R){
            F = R = -1;     // Queue become Empty
            return;
        }
        else{
            F++;
        }
    }
}

void dqinsert_F(int x){     
    if(F == 0){
        printf(" Queue OVERFLOW!");
    }
    else{
        if( F == -1){
            F = R = 0;
            queue[F] = x;
        }
        else{
            F--;     //Take Note of it
            queue[F] = x;
            return;
        }
    }
}

int dqdelete_R(){
    int y;

    if(R == -1){
        printf(" Queue UNDERFLOW!");
    }
    else{
        y = queue[R];
        printf("\nDeleted Element: %d\n", y);

        if(F == R){
            R = F = -1;     // Queue become Empty
        }
        else{
            R--;
        }
    }
}

void display(){
    if(F == -1){
        printf(" Queue is EMPTY!");
    }
    else{
        printf("\nQueue Elements:\n");
        for(int i = F; i <= R; i++){
            printf("%d ", queue[i]);
        }
    }
}

int main(){
    int choice,x;

    while(1){
        printf("\nEnter your choice: \n ---1. Insert at Rear \n ---2. Delete at Front \n ---3. Insert at Front \n ---4. Delete at Rear \n ---5. Display Elements \n ---6. Exit\n");
        scanf("%d",&choice);

        switch (choice){
            case 1:
                printf("Enter the element to insert at Rear: ");
                scanf("%d", &x);
                dqinsert_R(x);
                display();
                break;
            
            case 2:
                dqdelete_F();
                display();
                break;

            case 3:
                printf("Enter the element to insert at Front: ");
                scanf("%d", &x);
                dqinsert_F(x);
                display();
                break;

            case 4:
                dqdelete_R();
                display();
                break;

            case 5:
                display();
                break;

            case 6:
                exit(0);    // to exit from the loop condition
            
            default:
                printf("Invalid Choice!!");
                break;
        }
    }
    
    return 0;
}

