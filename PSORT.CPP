//Sorting of numbers using pointers.........
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{clrscr();
int *p,N,i,j,t;
printf("Enter the total no. you want to enter:");
scanf("%d",&N);
printf("Enter the elements-\n");
for(i=0;i<N;i++)
scanf("%d",p+i);
for(i=0;i<N-1;i++)
{
 for(j=0;j<N-i-1;j++)
 {
 if(*(p+j)>*(p+j+1))
  {
  t=*(p+j);
  *(p+j)=*(p+j+1);
  *(p+j+1)=t;
  }
 }
}
printf("Sorted order is:\n");
for(i=0;i<N;i++)
printf("%d\t",*(p+i));
getch();
}