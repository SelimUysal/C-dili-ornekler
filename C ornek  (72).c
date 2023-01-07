/* In the program define a structure for a point, and another structure (nested)
 * for a line containing 2 points. Write a function to compute the length of the line. */


#include <stdio.h>
#include <math.h>

struct point
{
    int x, y;
};

struct lineStruct
{
    struct point p1, p2;
};

float distance(struct point, struct point);

main()
{
    struct lineStruct line;
    printf("Enter coordinates of the starting point: ");
    scanf("%d %d", &line.p1.x, &line.p1.y);
    printf("Enter coordinates of the ending point: ");
    scanf("%d %d", &line.p2.x, &line.p2.y);
    printf("The length of the line is %5.2f", distance(line.p1, line.p2));
}

float distance(struct point a, struct point b)
{
    return (sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2)));
}