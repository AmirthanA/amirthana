#include<stdio.h>
main()
{
int i,m,flag=0;
printf("\n enter the number:");
scanf("%d",&m);
for(i=2;i<m/2;++i)
{
if(m%i==0)
{
 flag=1;
 break;
 }
}
 if(flag==0)
 {
 printf("\n the given number is  a prime %d",m);
 }
 else
 {
 printf("\n the given number is not a prime %d",m);

 }
    getch();
 }
