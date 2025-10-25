#include<stdio.h>

int main()
{
    int n,i=1;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int x,y;
    while(i<=n)
    {
        printf("Enter the value of x & y:");
        scanf("%d%d",&x,&y);
        int sum=x+y;
        printf("%d\n",sum);
        i++;
    }
    return 0;
}
