#include<stdio.h>
int main()
{
int i,m,f=1;
printf("\n enter the factorial number");
scanf("%d",&m);
for(i=1;i<=m;i++)
{
f=(f*i);
}
printf("\n the factorial number is %d",f);
getch();
}
