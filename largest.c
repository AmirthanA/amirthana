#include<stdio.h>
#include<conio.h>
main()
{

    int  i=1,num,large=-1;
        while(i<=3)
        {
        printf("\n enter the  number:");
        scanf("%d",&num);
        large = num>large?num:large;
        i++;
        }
        printf("\n the largest three numbers is %d",large);
        return 0;
}
