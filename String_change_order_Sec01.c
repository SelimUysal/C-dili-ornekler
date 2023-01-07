/*Write a program which gets two strings. Your program will call function f1, gets two strings and compares the strings.
It will store the preceding string in a new string and then appends the second string to the new string.
Sample Run:
Enter a string: kaplan
Enter a string: busra
String in order: busra kaplan */

#include <stdio.h>
#include <string.h>
void f1(char a[],char b[], char c[]);
int main()
{
    char str1[20], str2[20],str3[20];
    int last;
    printf("Enter a string:"); gets(str1);
    printf("Enter a string:"); gets(str2);
    f1(str1,str2,str3);
    printf("Strings in order: %s\n",str3);
    scanf("%d",&last);
    return 0;
}
void f1(char a[], char b[],char c[])
{
    c[0]='\0';
    if(strcmp(a,b)<0)
    {
        strcat(c,a);
        strcat(c," ");
        strcat(c,b);
    }else{
        strcat(c,b);
        strcat(c," ");
        strcat(c,a);
    }
}
