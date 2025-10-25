#include<stdio.h>

int main()
{
    int x,y,i;
    printf("Enter the value of x & y:");
    scanf("%d%d",&x,&y);

    for(i=x ; i<=y ; i++)
    {
        int c ='A'+i-1;
        printf("%c ",c);
    }

    return 0;
}
