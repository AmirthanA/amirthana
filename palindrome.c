#include<stdio.h>
main()
{
int m,temp,reverse=0,remainder;
printf("\n enter the numbers :");
scanf("%d",&m);
temp=m;
while(temp!=0)
{
remainder=temp%10;
reverse=reverse*10+remainder;
temp=temp/10;
}
if(reverse==m)
{
    printf("\n this is  a palindrome %d",m);
}
else
{
    printf("\n this is not a palindrome %d",m);
}
getch();
}
