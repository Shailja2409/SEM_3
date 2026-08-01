//33. Design anagram game using array.
// Allow a user to enter N words and store it in an array.
//Generate a random number between 0 to N-1.
//Based on the random number generated display the word stored at that index of an array and allow user to enter its anagram.
//Check whether the word entered by the user is an anagram of displayed number or not and display an appropriate message.
//Given a word A and word B. B is said to be an anagram of A if and only if the characters present in B is same as characters 
//present in A, irrespective of their sequence. For ex: “LISTEN” == “SILENT”

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
int main(){
    int n,i,j;

    printf("Enter no of words:");
    scanf("%d",&n);

    char words[n][100];

    printf("\n");
    for(i=0;i<n;i++){
        printf("Enter words:");
        scanf("%s", words[i]);
    }

    // Generate random code
    srand(time(NULL));
    int random = rand()%n;

    printf("\nSelected words: %s\n", words[random]);

    // Anagram Code
    char anagram[50];

    printf("Enter anagram word:");
    scanf("%s", anagram);

    if(strlen(anagram) != strlen(words[random])){
        printf("Not Found!!");
        return 0;
    }

    char temp;

    // To Sort Random words

}