/* Input the information of a student (name, mt1, mt2, final) into
 * a nested structure & o/p his/her avg where mt's are 25% & final is 50% */


 #include <stdio.h>
 
 struct exams
 {
     int mt1, mt2;
     int final;
 };

 struct student
 {
     char name[20];
     struct exams grades;
     float avg;
 };

 main()
 {
     struct student stu;
     printf("enter student name: ");
     gets(stu.name);
     printf("Enter mt1 mt2 and final grades: ");
     scanf("%d %d %d", &stu.grades.mt1, &stu.grades.mt2, &stu.grades.final);
     stu.avg = (stu.grades.mt1 * 0.25) + (stu.grades.mt2 * 0.25) + (stu.grades.final * 0.5);
     printf("%s has %5.2f average\n", stu.name, stu.avg);
 }