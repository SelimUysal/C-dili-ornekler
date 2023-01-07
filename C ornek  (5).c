#include<stdio.h>
#include<string.h>
#define LENGTH 20

int main()
{
    char str[LENGTH];
    printf("Please enter your line\n");
    fgets(str,LENGTH,stdin);

    printf("Line with lowercase letters\n%s\n",strlwr(str));
    return 0;
}
