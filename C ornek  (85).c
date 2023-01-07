#include<stdio.h>
#define LENGTH 20
int main()
{
    char str[LENGTH];
    printf("Enter a line\n");
    fgets(str,LENGTH,stdin);

    int i=0;

    while(i<LENGTH)
    {
        if(str[i]==' ')
            str[i]='*';

        i++;
    }

    printf("Line with asterisks\n");
    printf("%s\n",str);


    return 0;

}
