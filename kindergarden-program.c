#include<stdio.h>

int main()
{
int aa,p,i,j,count=0;
printf("\n Enter the total number of students:");
scanf("%d",&aa);
p=2*aa;
for(i=0;i<p;i++)
{
for(j=i+1;j<=p;j++)
{
 printf("\n%d\t%d\n",i,j);
 count++;
 }  }
 printf("the combination of daily walk is %d",count);
 return 0;
}
