#include<stdio.h>
void reverse(int n);
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    reverse(n);
    return 0;
}
void reverse(int n)
{
    int r,d=0;
    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    printf("REversed number is %d",r);
}
