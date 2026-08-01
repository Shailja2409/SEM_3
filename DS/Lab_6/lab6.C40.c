//40. WAP to define a C structure named Student (roll_no,
// name, branch and batch_no) and also to access the structure members using Pointer.
#include <stdio.h>
struct Student{
    char name[50];
    int roll_no;
    char branch[50];
    int batch_no;
};
int main(){
    struct Student *p,s1;
    p = &s1;

    printf("Enter student name:");
    scanf("%s", p->name);
    printf("Enter student roll no.:");
    scanf("%d",&p->roll_no);
    printf("Enter student branch:");
    scanf("%s", p->branch);
    printf("Enter student batch no.:");
    scanf("%d",&p->batch_no);

    printf("\n <---Student Details---> \n");
    printf("Name: %s\n",p->name);
    printf("Roll no.: %d\n",p->roll_no);
    printf("Branch: %s\n",p->branch);
    printf("Batch no.: %d\n",p->batch_no);
}