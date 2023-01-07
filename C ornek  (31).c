#include <stdio.h>
#define LENGTH 20

struct student{
    int id;
    char name[LENGTH];
    char surname[LENGTH];
    double GPA;
};

void display(int c, struct student s[]);

int main(){

    int count, i;
    printf("Enter the number of students: ");
    scanf("%d", &count);
    printf("\n");
    struct student students[count];

    for(i=0; i<count; i++){
        printf("Enter the ID of student: ");
        scanf("%d", &students[i].id);

        printf("Enter the NAME of student: ");
        getchar();
        fgets(students[i].name, LENGTH, stdin);
        students[i].name[strcspn(students[i].name, "\n")]='\0';

        printf("Enter the SURNAME of student: ");
        //getchar();
        fgets(students[i].surname, LENGTH, stdin);
        students[i].surname[strcspn(students[i].surname, "\n")]='\0';

        printf("Enter GPA of student: ");
        scanf("%lf", &students[i].GPA);

        printf("\n");
    }

    display(count, students);

    return 0;
}

void display(int c, struct student s[]){
    int i;
    for(i=0; i<c; i++){
        if(s[i].GPA>3.0){
            printf("Name Surname: %s %s\nID: %d\nGPA: %.2lf\n", s[i].name, s[i].surname, s[i].id, s[i].GPA);
        }
    }


}


