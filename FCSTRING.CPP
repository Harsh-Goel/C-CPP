#include<stdio.h>
#include<conio.h>
#include<string.h>
int scmp(char*,char*);
void main()
{clrscr();
int l;
char s[10],t[10];
printf("Enter first string\n");
gets(s);
printf("Enter second string\n");
gets(t);
l=scmp(s,t);
if(l==0)
printf("Equal strings");
else
printf("Not equal strings\n");
printf("Difference is %d",l);
getch();
}
int scmp(char s1[],char t1[])
{
int i;
char t;
for(i=0;(s1[i]==t1[i]&&s1[i]!='\0'&&t1[i]!='\0');i++);
if(s1[i]=='\0'&&t1[i]=='\0')
return(0);
else
return(s1[i]-t1[i]);
}