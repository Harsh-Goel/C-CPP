#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
char name[10];
int rollno;
int marks;
};
void main()
{clrscr();
struct student s[50];
int i,N;
char p[10];
printf("Enter the number of students base you want to record\n");
scanf("%d",&N);
printf("Enter the records\n");
for(i=0;i<N;i++)
{
printf("Enter the name of student %d\n",i+1);
fflush(stdin);
gets(s[i].name);
printf("Enter the roll no. of student %d\n",i+1);
scanf("%d",&s[i].rollno);
printf("Enter the marks of student %d\n",i+1);
scanf("%d",&s[i].marks);
}
printf("Enter the Name whose records you want to get\n");
fflush(stdin);
gets(p);
for(i=0;i<N;i++)
{
if(strcmp(p,s[i].name)==0)
{
printf("Roll no. is %d and marks are %d",s[i].rollno,s[i].marks);
}
}
getch();
}

