#include<stdio.h>

int main()
{
    int n,c=0,i;
    printf("Enter the value of n:");
    scanf("%d",&n);

    if(n<=1)
    {
        printf("%d is not a prime number",n);
    }
    else
    {
        for(i=2 ; i<n ; i++)
        {
            if(n%i==0)
            {
                c++;
                break;
            }

        }
        if (c==0)
        {
            printf("%d is a prime number",n);
        }
        else
        {
            printf("%d is not a prime number",n);
        }

    }
    return 0;

}
