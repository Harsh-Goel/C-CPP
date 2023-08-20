#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{clrscr();
int a,c,m,n,p,s=0;
for(n=100;n<=500;n++)
{
m=n;
p=n;
c=0;
while(n>0)
{
c++;
n=n/10;
}
while(m>0)
{
a=m%10;
s=s+pow(a,c);
m=m/10;
}
if(s==p)
printf("%d",s);
}
getch();
}