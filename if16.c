#include<stdio.h>

int main()
{
    int a,b,c;
    printf("enter three sides:");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b && b==c)
    {
        printf("Triangle is equilateral");
    }
    else if(a==b || b==c || c==a)
    {
        printf("Triangle is isosceles");
    }
    else
    {
        printf("Triangle is Scalene");
    }
    return 0;
}


