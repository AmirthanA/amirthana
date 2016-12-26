#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("\n enter the char:");
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        printf("\n the given char is alphabet %c",ch);
    }
else
    {
    printf("\n the char is not a  alphabet %c",ch);

    }
getch();
return 0;
}

