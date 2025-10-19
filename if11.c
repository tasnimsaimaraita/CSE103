#include<stdio.h>
int main()
{
    int week;
    printf("Enter week number(1-7):");
    scanf("%d",&week);

    if(week == 1)
    {
        printf("sunday");
    }
    else if(week == 2)
    {
        printf("monday");
    }
    else if(week == 3)
    {
        printf("tuesday");
    }
    else if(week == 4)
    {
        printf("wednesday");
    }
    else if(week == 5)
    {
        printf("thursday");
    }
    else if(week == 6)
    {
        printf("friday");
    }
    else if(week == 7)
    {
        printf("saturday");
    }
    else
    {
        printf("not a weekday");
    }
    return 0;
}
