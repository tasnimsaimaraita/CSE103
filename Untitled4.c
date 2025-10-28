#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter any numbers:");
    scanf("%d",&n);
    int x=1;
    for(i=1 ; i<=n ; i++)
    {
        x=(x*i);
    }
    printf("Factorial number is %d",x);
    return 0;
}

