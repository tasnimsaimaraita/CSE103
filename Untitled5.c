#include<stdio.h>
#include<math.h>

int main()
{
    int x;
    printf("Enter x:");
    scanf("%d",&x);
    int s=sqrt(x)*sqrt(x);
    if(x%s==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}

