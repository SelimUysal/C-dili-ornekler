#include<stdio.h>
#define LENGTH 20

int main()
{
    char str[LENGTH];
    printf("Please enter your line\n");
    fgets(str,LENGTH,stdin);

    int i=0;

    while(i<LENGTH)
    {
        if(str[i]<='Z' && str[i]>='A')
             str[i]+=32;
        i++;
    }

    printf("Line with lowercase letters\n%s\n",str);
    return 0;
}
