//30. WAP to replace lowercase characters by uppercase & vice-versa in a user specified string.
#include<stdio.h>
int main(){
    int i;
    char ch[100];

    printf("Enter the string:");
    scanf(" %s",ch);

    for(i=0; ch[i]!='\0'; i++){
        if(ch[i]>='A' && ch[i]<='Z'){
            ch[i]=ch[i]+32;             // Uppercase -> Lowercase (+32)
        }
        else if(ch[i]>='a' && ch[i]<='z'){
            ch[i]=ch[i]-32;            // Lowercase -> Uppercase (-32)
        }
    }

    printf("%s",ch);
}