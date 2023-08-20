#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
int n,s=0,a;
printf("Enter the number");
scanf("%d",&n);
while(n>0)
{
a=n%10;
s=s*10+a;
n=n/10;
}
printf("%d",s);
getch();
}
