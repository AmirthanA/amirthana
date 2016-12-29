#include<stdio.h>
#include<string.h>
void main()
{
char s[50],temp;
int i;
printf("\n enter the string");
scanf("%s",s);
for(i=0;i<strlen(s);i=i+2)
{
temp =s[i];
s[i]=s[i+1];
s[i+1]=temp;
}
printf("\n swapped string is %s",s);
getch();
}
