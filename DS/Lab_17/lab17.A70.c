// 70. Write a menu driven program to implement following operations on the Queue using an Array
// ENQUEUE
// DEQUEUE
// DISPLAY

#include <stdio.h>
#define MAX 50

int queue[MAX];
int F = -1, R = -1;

void enqueue(int x){
    if(R >= MAX -1){
        printf("Queue OVERFLOW!");
        return;
    }
    else{
        R++;
        queue[R] = x;
        if(F == -1)
        F = 0;
    }
}

void dequeue(){
    int y;

    if(F == -1){
        printf("Queue UNDERFLOW!");
        return;
    }
    else{
        y = queue[F];

        if(F == R){
            F = R = -1;
            return;
        }
        else{
            F++;
        }
    }
    printf("\nDeleted Element: %d",y);
}

void display(){
    if(F == -1){
        printf(" Queue is EMPTY!");
    }
    else{
        for(int i = F; i <= R; i++){
            printf("%d ", queue[i]);
        }
    }
}

int main(){
    int x,i,n;

    printf("Size of Queue: ");
    scanf("%d",&n);

    printf("Elements of queue: \n");
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