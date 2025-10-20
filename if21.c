#include<stdio.h>

int main()
{
    int u;
    float b,tb;
    printf("Enter the unit:");
    scanf("%d",&u);

    if(u>=0 && u<=50)
    {
        b=u*.50;
    }
    else if(u>=51 && u<=150)
    {
        b=(50*.50)+((u-50)*.75);
    }
    else if(u>=151 && u<=250)
    {
        b=(50*.50)+(100*.75)+((u-150)*1.20);
    }
    else
    {
        b=(50*.50)+(100*.75)+(100*1.20)+((u-250)*1.50);
    }
    tb=b+b*.20;
    printf("Total bill: %.2f",tb);
    return 0;
}
