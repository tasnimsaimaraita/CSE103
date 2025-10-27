#include<Stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter the value of upper limit:");
    scanf("%d",&n);

    for(i=1 ; i<=n ; i++)
    {

        sum=sum+i;
    }
    printf("Sum is %d:",sum);
    return 0;
}


