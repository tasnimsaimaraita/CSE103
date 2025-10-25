#include <stdio.h>

int main()
{
    int n,x=2,flag=0;
    printf("Enter input:");
    scanf("%d",&n);
    while(x<=n/2)
    {
        if(n%2==0)
        {
            flag=1;
            break;
        }
        x=x+1;
    }

    if(n==1)
    {
        printf("%d is invalid Number",n);
    }
    else if(flag==0)
    {
        printf("%d is Prime Number",n);
    }
    else
    {
        printf("%d is not Prime Number",n);
    }

    return 0;
}
