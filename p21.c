#include<stdio.h>
#include<math.h>
int main()
{
    int r,a;
    printf("Enter r:");
    scanf("%d",&r);
    double pi=acos(-1.0);
    a=pi*r*r;

    printf("Area:%d\n",a);
    return 0;
}

