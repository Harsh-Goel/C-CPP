#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{clrscr();
char s[10],t[10];
printf("Enter the string\n");
gets(s);
strcpy(t,s);
if(strcmp(t,strrev(s))==0)
printf("String is palindrome");
else
printf("String is not palindrome");
getch();
}
