//23. WAP to sort the N names in an alphabetical order.
#include <stdio.h>
#include <string.h>
int main(){
    int n, i, j;

    printf("Enter the number:");
    scanf("%d", &n);
    
    char name[n][100], temp[50];
    
    for(i = 0; i < n; i++){
        printf("Enter the name:");
        scanf("%s", name[i]);
    }


    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(strcmp(name[i], name[j]) > 0){
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    for(i = 0; i < n; i++){
        printf("%s\n", name[i]);
    }
}