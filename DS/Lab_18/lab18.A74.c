#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int queue[MAX];
int size=0;

void insert(int x){
    if(size == MAX ){
        printf("Queue FULL");
        return;
    }
    else{
        queue[size] = x;
        size++;
    }
}

void delete(){
    if(size == 0){
        printf("Queue empty\n");
        return;
    }
    else{
        int minIndex=0;
        int i,y;

        for(i = 0; i < size; i++){        // find Minimum Value
            if(queue[minIndex] > queue[i]){
                minIndex = i;
            }
        }
        y = queue[minIndex];
        printf("delete element: %d\n",y);

        for(i = minIndex; i < size-1; i++){     // Left shifting
            queue[i]=queue[i+1];
        }
        size--;
    }
}

void display(){
    int i;
        printf("display element: ");
        for(i = 0; i < size; i++){
            printf("%d ",queue[i]);
        }
}

void main(){
    int x,c;
    
    while(1){

    printf("\nEnter the c:\n");
    printf("1.Insert\n");
    printf("2.Delete\n");
    printf("3.Display\n");
    printf("4.exit\n");
    scanf("%d",&c);
    
    switch (c){
    case 1:
        printf("Enter element:");
        scanf("%d",&x);
        insert(x);
        display();
        break;
    
    case 2:
        delete();
        display();
        break;

    case 3:
        display();
        break;    

    case 4: 
       exit(0); 
       break;

    default:
        printf("Invalid choice");
        break;
    }
}

}