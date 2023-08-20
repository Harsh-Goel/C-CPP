#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{clrscr();
int a,b,c,n,m,s=0;
printf("Enter the number you want to check");
scanf("%d",&n);
b=n;
m=n;
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
if(s==b)
printf("Number is armstrong");
else
printf("Number is not palindrome");
getch();
}

