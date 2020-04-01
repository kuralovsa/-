#include<iostream>
#include<stdio.h>

struct student
{ char name[30];
int kurs;
float bagasy;
};
int main()
{
struct student stud1, stud2;
printf("Esimyn engis:");
gets(stud1.name);
printf("student kursy:");
scanf("%d", &stud1.kurs);
printf("student ulgerimy:");
scanf("%d", &stud1.bagasy);
if(stud1.bagasy=5)
printf("%s%d",stud1.name,stud1.kurs,"ulgerimy ote zhaksy");
if(stud1.bagasy<5&&stud1.bagasy>4)
printf("%s",stud1.name,"%d",stud1.kurs,"ulgerimy  zhaksy Zhane Ote zhaksy");
if(stud1.bagasy=4)
printf("%s",stud1.name,"%d",stud1.kurs,"ulgerimy ote zhaksy");
if(stud1.bagasy<4&&stud1.bagasy>3)
printf("%s",stud1.name,"%d",stud1.kurs,"ulgerimy  zhaksy Zhane kanagattandyrarlyk");
if(stud1.bagasy=3&&stud1.bagasy<3)
printf("%s",stud1.name,"%d",stud1.kurs,"ulgerimy tek kanagattandyrarlyk");
}
