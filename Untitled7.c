#include<stdio.h>
#include<math.h>
void power(int b,int p);
int main()
{
    int b,p;
    printf("Enter base num & power:");
    scanf("%d %d",&b,&p);
    power(b,p);
    return 0;
}
void power(int b,int p)
{
    int ans=pow(b,p);
    printf("%d",ans);
}
