#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the numbers:");
    scanf("%d%d",&x,&y);
    int modulo =x%y;
    printf("Output:%d\n", modulo);
    return 0;
}


