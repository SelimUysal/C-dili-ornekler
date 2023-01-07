#include<stdio.h>
#include<string.h>
#define LENGTH 20
int main()
{
    char str[LENGTH];
    printf("Enter a line\n");
    fgets(str,LENGTH,stdin);

    str[strcspn(str,"\n")]='\0'; // Since fgets() retains a final '\n', we have to replace the '\n' with an empty char. Otherwise '\n' affect our algorithm
    int length = strlen(str);
    int i;

    do
    {
        i=strcspn(str," ");
        if(i<length)
            str[i]='*';
    }while(i<length);

    printf("Line with asterisks\n");
    printf("%s\n",str);
    return 0;

}
