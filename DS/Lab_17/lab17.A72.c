//72. Write a menu driven program to implement following operations on a circular queue using an Array
// Insert
// Delete
// Display all elements of the queue
#include <stdio.h>
#define MAX 6

int queue[MAX];
int F = -1, R = -1;

void cqinsert(int x){
    if((R + 1) % MAX == F){
        printf("Queue is OVERFLOW!");
        return;
    }
    else{
        R = (R + 1) % MAX;
        queue[R] = x;
        if(F == -1){
            F = 0;
            return;
        }
    }
}

void cqdelete(){
    int y;

    if(F == -1){
        printf("Queue UNDERFLOW!\n");
        return;
    }
    else{
        y = queue[F];

        if(F == R){
            F = R = -1;
            return;
        }
        else{
            F = (F + 1) % MAX;
        }
    }
    printf("\nDeleted Elements: %d",y);
}

void display(){
    int i;

    if(F == -1){
        printf(" Queue EMPTY!");
    }
    else{
        for(i = F; i <= R; i++){
            printf("%d ",queue[i]);
        }
    }
}

int main(){
    int x,i,n;

    printf("Size of Queue: ");
    scanf("%d",&n);

    printf("Elements of queue:\n");
    for(i = 0; i < n; i++){
        scanf("%d",&x);
        cqinsert(x);
    }

    printf("Elements in Queue:\n");
    display();

    cqdelete();

    printf("\nAfter deleted:");
    display();

    return 0;
}