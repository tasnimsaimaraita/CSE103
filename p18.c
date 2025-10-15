#include<stdio.h>

int main()
{
    int x,y,s,m,M,d,mo;
    printf("Enter the numbers:");
    scanf("%d%d",&x,&y);
    s=x+y;
    m=x-y;
    M=x*y;
    d=x/y;
    mo=x%y;
    printf("%d + %d = %d\n", x,y,s);
    printf("%d - %d = %d\n", x,y,m);
    printf("%d * %d = %d\n", x,y,M);
    printf("%d / %d = %d\n", x,y,d);
    printf("%d % %d = %d\n", x,y,mo);
    return 0;


}
