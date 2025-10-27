#include<Stdio.h>

int main()
{
    int n,c=0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    if(n==0)
    {
        c=1;
    }
    else
    {
        while(n!=0)
        {
            n=n/10;
            c++;
        }
    }
    printf("number of digits:%d\n",c);
    return 0;
}

