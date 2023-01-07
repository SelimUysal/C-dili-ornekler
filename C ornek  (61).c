
/* Input 6 characters into an array & using a function interchange 
 * ith & jth characters where i & j are entered by the user. 
 * I/P  ANKARA
 * O/P  ARKANA */

#include <stdio.h>

void interchange(char *, char *);

int main()
{
    char word[6];
    int i, j;

    printf("Enter word: ");
    for (i = 0; i < 6; i++)
        scanf("%c", &word[i]);
    printf("Enter positions to be switched: ");
    scanf("%d %d", &i, &j);
    interchange(&word[i], &word[j]);
    printf("Resulting word ");
    for (i = 0; i < 6; i++)
        printf("%c", word[i]);
}

void interchange(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}