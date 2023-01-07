/* Read information (name, no, gpa) about 50 students into an array of structures,
 * and find the no of the valedictorian (highest gpa) */


#include <stdio.h>

struct student
{
    int id;
    float gpa;
};

main()
{
    struct student stu[50];
    int i, maxid;
    float max = 0.0;

    for (i = 0; i < 50; i++)
    {
        printf("Enter student id & gpa: ");
        scanf("%d %f", &stu[i].id, &stu[i].gpa);
        if (stu[i].gpa > max)
        {
            max = stu[i].gpa;
            maxid = stu[i].id;
        }
    }
    printf("Id of valedictorian with %5.2f gpa is %d", max, maxid);
}