//52. WAP to split a circular linked list into two halves.
#include <stdio.h>
#include <stdlib.h>
struct node{
    int info;
    struct node *link;
};

struct node *first = NULL;
struct node *last = NULL;

void insert(int x){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->info = x;

    if (first == NULL)
    {
        newNode->link = newNode;
        first = last = newNode;
        return;
    }

    last->link = newNode;
    newNode->link = first;
    last = newNode;
}

void display(struct node *first){
    struct node *temp = first;

    if (temp == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    do
    {
        printf("%d -> ", temp->info);
        temp = temp->link;
    } while (temp != first);

    printf("Back to %d", first->info);
}

void splitList(){
    struct node *part1 = NULL, *part2 = NULL;
    struct node *pred = first, *save = first;

    while (save->link != first && save->link->link != first)
    {
        pred = pred->link;
        save = save->link->link;
    }

    if (save->link->link == first)
    {
        save = save->link;
    }

    part1 = first;
    part2 = pred->link;

    pred->link = part1;
    save->link = part2;

    printf("\nPart 1 Circular Linked List: ");
    display(part1);

    printf("\nPart 2 Circular Linked List: ");
    display(part2);
}

int main(){
    int n, x;
    printf("Enter number of elements in original list: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &x);
        insert(x);
    }

    printf("\nOriginal list: ");
    display(first);

    splitList();

    return 0;
}