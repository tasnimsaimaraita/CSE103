#include<stdio.h>

void cube (int c);
int main()
{
    int n;
    printf("Enter input:\n");
    scanf("%d",&n);
    cube(n);
    return 0;
}
void cube (int c)
{
    int ans;
    ans=c*c*c;
    printf("cube of %d is %d",c,ans);
}
