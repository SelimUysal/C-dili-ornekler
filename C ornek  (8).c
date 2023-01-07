#include<stdio.h>
#define LENGTH 100
int main()
{
    char str[LENGTH];
    printf("Please enter a line\n");
    fgets(str,LENGTH,stdin);

    int i=0, j=0, wordSize=0;
    int wordSizes[LENGTH];

    while(i<LENGTH)
    {
        if(!(str[i]==' ' || str[i]=='\n'))
            wordSize++;
        else
        {
            wordSizes[j]=wordSize;
            wordSize=0;
            j++;
        }
        i++;
    }

    printf("Number of the words in the line = %d\n",j);

    int k=0,l;
    while(k<j)
    {
        printf("Word %d:",k+1);
        for(l=0;l<wordSizes[k];l++)
            printf("%c",'*');
        printf("\n");
        k++;
    }


    return 0;
}
