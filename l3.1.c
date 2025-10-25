#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter the value of x & y:");
    scanf("%d%d",&x,&y);
    int i=x;

    while(i<=y)
    {
        int c ='A'+i-1;
        printf("%c ",c);
        i++;
    }
    return 0;
}
