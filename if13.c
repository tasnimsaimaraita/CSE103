#include <stdio.h>

int main()
{
    int a,n;
    printf("Enter the amount:");
    scanf("%d",&a);

    if(a>=500)
    {
        n=a/500;
        a=a%500;
        printf("500: %d\n",n);
    }
    if(a>=100)
    {
        n=a/100;
        a=a%100;
        printf("100: %d\n",n);
    }
    if(a>=50)
    {
        n=a/50;
        a=a%50;
        printf("50: %d\n",n);
    }
    if(a>=20)
    {
        n=a/20;
        a=a%20;
        printf("20: %d\n",n);
    }
    if(a>=10)
    {
        n=a/10;
        a=a%10;
        printf("10: %d\n",n);
    }
    if(a>=5)
    {
        n=a/5;
        a=a%5;
        printf("5: %d\n",n);
    }
    if(a>=2)
    {
        n=a/2;
        a=a%2;
        printf("2: %d\n",n);
    }
    if(a>=1)
    {
        n=a/1;
        a=a%1;
        printf("1: %d\n",n);
    }
    else
    {
        printf("Invalid amount");
    }
    return 0;
}
