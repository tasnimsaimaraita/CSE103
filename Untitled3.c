#include<stdio.h>
void maxmin (int a,int b);

int main()
{
    int n1,n2;
    printf("input two numbers:");
    scanf("%d %d",&n1,&n2);
    maxmin(n1,n2);
    return 0;
}
void maxmin (int a,int b)
{
    if(a>b)
    {
        printf("max is %d\n",a);
        printf("min is %d\n",b);
    }
    else
    {
        printf("max is %d\n",b);
        printf("min is %d\n",a);
    }
}
