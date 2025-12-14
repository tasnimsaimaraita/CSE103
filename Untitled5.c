#include<stdio.h>
void primenum(int p);
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    primenum(n);
    return 0;
}
void primenum (int p)
{
    int i,count=0;
    if(p<=1)
    {
        printf("%d is not prime number.\n",p);
    }
    else
    {
        for(i=2 ; i<p ; i++)
        {
            if(p%i==0)
            {
                count++;
                break;
            }
        }
    }
    if(count==0)
    {
        printf("%d is prime number.\n",p);
    }
    else
    {
        printf("%d is not prime number.\n",p);
    }
}
