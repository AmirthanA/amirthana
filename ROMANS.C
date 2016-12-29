#include<stdio.h>
int main()
{
char m;
printf("enter A,M,I,R,T,H,A,\0");
printf("\n enter the  romans:");
scanf("%c",&m);
printf("\n %c",m);
switch(m)
{

case 'A':
    printf("\n enter value =1");
    break;
case 'M':
    printf("\n enter value=5");
    break;
case 'I':
    printf("\n enter value=50");
    break;
case 'R':
    printf("\n enter value=100");
    break;
case 'T':
    printf("\n enter value=500");
    break;
case 'H':
    printf("\n enter value=1000");
    break;
case '\0':
    printf("\n enter value \0");
    break;
}
return 0;
}
