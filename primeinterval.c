#include<stdio.h>
main()
{
int i,m,n,flag=0;
printf("\n the intervels between start and end");
scanf("%d%d",&m,&n);
printf("\n the prime number between ");
while (m<n)
{
flag=0;
for(i=2;i<=m/2;i++)
{
if(m%i==0)
{
flag=1;
break;
}}
if(flag==0)
printf("%d", m);
m++;
}
return 0;
}
