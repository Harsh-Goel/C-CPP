// Program to print union of two sets

#include<stdio.h>
int main()
{
 int A[10],B[10],C[20],i,j,k=0,n1,n2;
// Input set A
 printf("Enter number of element of set A\n");
 scanf("%d",&n1);
 printf("Enter the element of set A \n");
 for(i=0;i<n1;i++)
 scanf("%d",&A[i]);
// Input set B
 printf("Enter number of element of set B\n");
 scanf("%d",&n2);
 printf("Enter the element of set B \n");
 for(i=0;i<n2;i++)
 scanf("%d",&B[i]);
// approach to calculate union
// copy the element of set A in set C
 for(i=0;i<n1;i++)
 {
// check For repeated elements
 for(j=0;j<k;j++)
 {
 if(C[j]==A[i])
 break;
 }
 if(j==k) //if not repeated then store value in set c
 {
 C[k]=A[i];
 k++;
 }
 }
// copy element of set B in set C
 for(i=0;i<n2;i++)
 {
// check for repeated element
 for(j=0;j<k;j++)
 {
 if(C[j]==B[i])
 break;
 }
 if(j==k) // if element is not repeated then store in set C
 {
 C[k]=B[i];
 k++;
 }
 }
// print union of set A and set B
 printf("Union of set A and B is \n");
 for(i=0;i<k;i++)
 printf("%d ",C[i]);
 printf("\n\n");
 return 0;
}
