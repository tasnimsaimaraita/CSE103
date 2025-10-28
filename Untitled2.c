#include<stdio.h>
int main()
{
    int n,d=0,r;
    printf("Enter any number :");
    scanf("%d",&n);

    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    printf("Reversed numbers are:%d\n",r);
    return 0;
}
