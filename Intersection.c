#include<stdio.h>
int main()
{
int a[10], b[10], flag = 0, n1, n2, i, j;
printf("Enter size of Set A : ");
scanf("%d",&n1);
printf("\n Enter size of Set B: ");
scanf("%d",&n2);
printf("\n Enter elements of Set A : ");
for(i = 0;i < n1;i++)
scanf("%d",&a[i]);
printf("\nEnter elements of Set B : ");
for(i = 0;i < n2;i++)
scanf("%d",&b[i]);
printf("Intersection of Sets \n");
for(i = 0;i < n1;i++)
{
for(j = 0;j < n2;j++)
{
if(b[i] == a[j])
{
flag = 1;
}
}
if(flag == 1)
{
printf("%d\n ", b[i]);
}
flag = 0;
}
return 0;
}
