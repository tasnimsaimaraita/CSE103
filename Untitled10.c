#include<stdio.h>

int main()
{
    int x,y,z;
    printf("Enter x & y & z:");
    scanf("%d%d%d",&x,&y,&z);
    if(x+y>z && y+z>x && x+z>y)
    {
        printf("Triangle");
    }
    else
    {
        printf("Not a triangle");
    }
    return 0;
}



