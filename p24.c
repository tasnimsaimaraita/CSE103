#include<stdio.h>
#include<math.h>
int main()
{
    int r,v;
    printf("Enter r:");
    scanf("%d",&r);
    double pi=acos(-1.0);
    v=(4*pi*r*r*r)/3;

    printf("Volume:%d\n",v);
    return 0;
}

