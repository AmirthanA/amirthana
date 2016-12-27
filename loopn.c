#include<stdio.h>
void main()
{
int m,i,sum=0;
printf("\n enter the number:");
scanf("%d",&m);
for(i=0;i<=m;i++)
{
sum=sum+i;
}
printf("\n the number is %d", sum);
return 0;
}
