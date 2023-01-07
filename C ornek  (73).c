#include <stdio.h>
#include <math.h>

struct point
{
    int x, y;
};

struct Circle
{
    struct point center;
    int radius;
};

float distance(struct point, struct point);

main()
{
    struct Circle c;
    struct point p;
    float d;
    printf("Enter center coordinates of the circle: ");
    scanf("%d %d", &c.center.x, &c.center.y);
    printf("Enter radius: ");
    scanf("%d", &c.radius);
    printf("Enter coordinates of the point: ");
    scanf("%d %d", &p.x, &p.y);
    d = distance(c.center, p);
    if (d < c.radius)
        printf("Point is in the circle");
    else printf("Point is not in the circle");
}

float distance(struct point a, struct point b)
{
    return (sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2)));
}