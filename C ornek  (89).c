#include<stdio.h>
#define LENGTH 100

int main()
{
    char str[LENGTH];
    printf("Please enter your line\n");
    fgets(str,LENGTH,stdin);

    int wordSize=0, i=0;
    int twoLetterWordsCount=0, threeLetterWordsCount=0, fourLetterWordsCount=0;

    while(i<LENGTH)
    {
        if((str[i]<='Z' && str[i]>='A')||(str[i]<='z' && str[i]>='a'))
        {
            wordSize++;
        }
        else
        {
            if(wordSize==2)
                twoLetterWordsCount++;
            else if(wordSize==3)
                threeLetterWordsCount++;
            else if(wordSize==4)
                fourLetterWordsCount++;

            wordSize=0;
        }

       i++;
    }

    printf("The number of 2 letter words: %d\n",twoLetterWordsCount);
    printf("The number of 3 letter words: %d\n",threeLetterWordsCount);
    printf("The number of 4 letter words: %d\n",fourLetterWordsCount);

    return 0;
}
