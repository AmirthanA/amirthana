#include<stdio.h>
main()
{
int m=0,n,sum=0;
printf("\n enter the number :");
scanf("%d",&n);

while(m<=n)
{
    sum=sum+m;
m++;
}
printf("\n sum of the number is %d",sum);
return 0;
}
