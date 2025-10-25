#include<Stdio.h>

int main()
{
    int n,i=1,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    do
    {
        sum = sum + i;
        i++;
    }
    while(i<=n);
    printf("Sum is %d\n",sum);
    return 0;


}

