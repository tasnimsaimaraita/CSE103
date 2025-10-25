#include<stdio.h>

int main()
{
    int n,r,d=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    do
    {
        d=n%10;
        r=r*10+d;
        n=n/10;

    }

    while(n!=0);
    printf("Reversed number:%d",r);
    return 0;

}
