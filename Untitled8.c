#include<Stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(i=1 ; i<=n ; i++)
    {
        if(i%2!=0)
        {
            sum = sum+i;
        }
    }
    printf("Sum of odd number %d",sum);
    return 0;
}


