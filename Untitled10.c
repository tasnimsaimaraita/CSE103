#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(i=2 ; i<=n ; i+=2)
    {

        printf("Even numbers:%d\n",i);
    }
    return 0;
}

