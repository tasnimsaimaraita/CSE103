#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,z;
    printf("Enter x & y & z:");
    scanf("%d%d%d",&x,&y,&z);
    if(x+y>z && y+z>x && x+z>y)
    {
        if(z*z==((x*x)+(y*y)) || y*y==((x*x)+(z*z)) || x*x==((z*z)+(y*y)))
        {
            printf("right angle triangle");
        }
        else
            printf("Triangle");
    }

    else
    {
        printf("Not a triangle");
    }
    return 0;
}




