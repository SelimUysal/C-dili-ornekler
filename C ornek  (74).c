#include <stdio.h>

main()
{
    FILE *inp;
    int a;
    char ch1, str1[10];

    inp = fopen("input.doc", "r");
    fscanf(inp, "%d", &a);
    printf("%d\n", a);
    fscanf(inp, "\n");
    fscanf(inp, "%c", &ch1);
    printf("%c\n", ch1);
    fscanf(inp, "%s", &str1);
    printf("%s", str1);
}