#include<stdio.h>
#include<string.h>
#define LENGTH 100

int main()
{
    char str[LENGTH];
    printf("Please enter your line\n");
    fgets(str,LENGTH,stdin);
    str[strcspn(str,"\n")]='\0'; // Since fgets() retains a final '\n', we have to replace the '\n' with an empty char. Otherwise '\n' affect our algorithm


    int wordSize=0, i=0;
    int twoLetterWordsCount=0, threeLetterWordsCount=0, fourLetterWordsCount=0;
    char *p;
    p=strtok(str," ");
    while(p!=NULL)
    {
       if(strlen(p)==2)
            twoLetterWordsCount++;
       else if(strlen(p)==3)
            threeLetterWordsCount++;
       else if(strlen(p)==4)
            fourLetterWordsCount++;

        p = strtok(NULL," ");
    }


    printf("The number of 2 letter words: %d\n",twoLetterWordsCount);
    printf("The number of 3 letter words: %d\n",threeLetterWordsCount);
    printf("The number of 4 letter words: %d\n",fourLetterWordsCount);

    return 0;
}
