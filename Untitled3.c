#include<Stdio.h>
int main()
{
    int n,i,sum=0,a[1000];

    printf("enter n:");
    scanf("%d",&n);

    printf("Enter elements:");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0 ; i<n ; i++)
    {
        sum=sum+a[i];
    }
    printf("Sum of all elements:%d\n",sum);
    return 0;
}
