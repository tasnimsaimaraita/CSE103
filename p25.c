#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("Enter a & b:");
    scanf("%d%d",&a,&b);
    int c=a;
    int d=b;
    a=d;
    b=c;

    printf("%d  %d\n",a,b);
    return 0;
}

