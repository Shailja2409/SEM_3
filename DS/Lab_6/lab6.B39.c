//39. WAP to check whether the string is Palindrome or not using Pointer.
#include<stdio.h>
#include<string.h>
#include<stdalign.h>

int main()
{
    int n, i, j;
    char temp = 0;
    char *str, *org;

    printf("Enter String Size : ");
    scanf("%d", &n);

    str = (char *)malloc((n + 1) * sizeof(char));
    org = (char *)malloc((n + 1) * sizeof(char));

    if(str == NULL || org == NULL)
    {
        printf("Memory Allocation Failed!");
        return 0;
    }

    printf("Enter String : ");
    scanf("%s", str);

    strcpy(org, str);

    for (i = 0; i < strlen(str); i++)
    {
        for (j = strlen(str) - 1 - i; j >= 0; j--)
        {
            if(i < j)
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
            break;
        }
    }

    printf("Reversed String : %s\n", str);

    if( strcmp( org, str) == 0)
    {
        printf("String Is Palindrome");
    }

    else
    {
      printf("String Is Not Palindrome");   
    }

    free(str);
    free(org);

    return 0;

}

 /*for (i = 0; i < strlen(str); i++)
    {
        for (j = strlen(str) - 1 - i; j >= 0; j--)
        {
            if (i < j)
            {
                temp = *(str + i);
                *(str + i) = *(str + j);
                *(str + j) = temp;
            }
            break;
        }
}*/