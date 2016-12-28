#include<stdio.h>
int main()
{
int m,temp,rem,sum=0;
printf("\n enter the number ");
scanf("%d",&m);
temp=m;
{
while(temp!=0)
{
rem=temp%10;
sum=sum+rem*rem*rem;
temp=temp/10;
}}
if(sum==m)
{printf("\n the given number is armstrong");
}
else
{
printf("\n the given number is not armstrong");
}
}
