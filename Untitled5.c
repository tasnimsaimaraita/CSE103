#include<Stdio.h>

int main()
{
    int n,i;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(i=1 ; i<=n ; i++)
    {
        if(i%2!=0)
        {
            printf("Odd number:%d\n",i);
        }
    }
    return 0;
}


