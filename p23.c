#include<stdio.h>
#include<math.h>
int main()
{
    int r,h,v;
    printf("Enter r & h:");
    scanf("%d%d",&r,&h);
    double pi=acos(-1.0);
    v=pi*r*r*h;

    printf("Volume:%d\n",v);
    return 0;
}


