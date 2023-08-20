#include<stdio.h>
int main()
{
 int a[10],b[10],c[10],k=0,n1,n2,i,j,l;
 printf("Enter size of set A\n");
 scanf("%d",&n1);
 printf("Enter elements of set A\n");
 for( i=0;i<n1;i++)
 scanf("%d",&a[i]);
 printf("Enter size of set B\n");
 scanf("%d",&n2);
 printf("Enter elements of set B\n");
 for( i=0;i<n2;i++)
 scanf("%d",&b[i]);
 // Approach for a-b
 for( i=0;i<n1;i++)
 {
 for(j=0;j<n2;j++)
 {
 if(b[j]==a[i])
 break;
 }
 if(j==n2)
 {
// check that element already present in the set 
// if present than ignore, otherwise add to the difference set 
 for(l=0;l<k;l++)
 {
 if(c[l]==a[i])
 break;
 }
 if(l==k)
 {
 c[k]=a[i];
 k++;
 }
 }
 }
 printf("Difference of A and B is \n");
 for(i=0;i<k;i++)
 {
 printf("%d\n ",c[i]);
 }
 return 0;
}