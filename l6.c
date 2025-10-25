#include<stdio.h>

int main()
{
    int n,i;
    printf("Input:");
    scanf("%d",&n);
    int x=1;
    for(i=1 ; i<=n ; i++)
    {
        x =(x*i);
    }
    printf("Output:%d ",x);

    return 0;
}
