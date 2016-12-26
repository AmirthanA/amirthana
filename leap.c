#include<stdio.h>
#include<conio.h>
int main()
{
int year;
printf("\n enter the given number:");
scanf("%d",&year);
if((year%4==0)&&(year%100==0)||(year%400==0))
{
printf("\n the given year is leap year %d", year);
}
else
{
printf("\n the given number is not a leap year %d",year            );
}
}
