#include<stdio.h>
int main()
{
 int temp,m;
 printf("\n enter the number");
 scanf("%d",&m);
 while(m!=0)
 {
     temp=m%10;
     printf("%d",temp);
     m=m/10;
 }
 return 0;
}
