#include<stdio.h>
#include<string.h>
#define LENGTH 100

int main()
{
    char str[LENGTH];
    printf("Please enter your line\n");
    fgets(str,LENGTH,stdin);
    str[strcspn(str,"\n")]='\0'; // Since fgets() retains a final '\n', we have to replace the '\n' with an empty char. Otherwise '\n' affect our algorithm

    int le=strlen(str);
    int i=0;
    int wordCount=0;
    while(i<le)
    {
        if(str[i]==' ')
            wordCount++;

        i++;
    }

    printf("Number of the words in the line = %d\n",wordCount+1);

   /*
    You can use following algorithm to count the words also,
     but since program wants you to display number of the words before display the asterisks, this won't work as intended
   */

    int l=0,k,len;
    char *p;
    p=strtok(str," ");

    while(p!=NULL)
    {
        len=strlen(p);
        printf("Word %d:",l+1);
        for(k=0;k<len;k++)
            printf("%c",'*');
        printf("\n");
        p = strtok(NULL," ");
        l++;
    }

    return 0;
}
