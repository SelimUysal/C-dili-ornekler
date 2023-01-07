#include <stdio.h>
#define LENGTH 20

struct student{
    char name[LENGTH];
    float midterms[3];
    float fin;
};

int main(){

    int count, i, j;
    printf("Enter the count of the students: ");
    scanf("%d", &count);

    struct student students[count];

    for(i=0; i<count; i++){
        printf("Enter the name of the student: ");
        getchar();
        fgets(students[i].name, LENGTH, stdin);
        students[i].name[strcspn(students[i].name, "\n")]='\0';

        for(j=0; j<3; j++){
            printf("Enter midterm %d grade of the student: ", j+1);
            scanf("%f", &students[i].midterms[j]);
        }

        printf("Enter final grade of the student: ");
        scanf("%f", &students[i].fin);

    }

    float avg;

    for(i=0; i<count; i++){  // check students
        avg=0;
        float discarded = students[i].midterms[0];
        for(j=1; j<3; j++){  // check student midterm grades
            if(discarded > students[i].midterms[j]){
                avg += discarded*0.3f;
                discarded = students[i].midterms[j];
            }else{
                avg += students[i].midterms[j]*0.3f;
            }
        }
        avg += students[i].fin*0.4f;
        printf("Average grade of %s is %.2f\n", students[i].name, avg);
    }

    return 0;
}
