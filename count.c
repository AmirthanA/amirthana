#include<stdio.h>
main()
{
int n,count=0;
printf("\n enter the number:");
scanf("%d",&n);
while(n!=0)
{
count++;
n=n/10;
}
printf("\n the count number is %d",count);
getch();
}
