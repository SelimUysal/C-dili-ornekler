/* Sample Run:
Enter a string:cansu
Reverse of the cansu is usnac
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[80]; char str2[80];
    int length,i,a;
    printf("Enter a string");
    gets(str1);
    str2[0]='\0';
    length=strlen(str1);
    for (i=0; i<length;i++)
    {
        strcat(str2,&str1[length-i-1]);
        str2[i+1]='\0';}
        printf("Reverse of %s is %s\n",str1,str2);
        scanf("%d",&a);
        return 0;
    }

