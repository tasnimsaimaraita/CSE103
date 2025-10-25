#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Input:");
    scanf("%d",&n);
    int x=1;
    while(i<=n)
    {
        x=(x*i);
        i++;
    }
    printf("Output:%d ",x);
    return 0;
}
