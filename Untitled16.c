#include<Stdio.h>
int main()
{
    int n,r,d=0;
    printf("Enter any value:");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    printf("Reverse numbers:%d\n",r);
    return 0;
}

