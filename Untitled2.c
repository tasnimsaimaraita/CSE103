#include<stdio.h>

int main()
{
    int n,i;
    int a[1000];

    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Negative elements are:\n");
    for(i=0 ; i<n ; i++)
    {
        if(a[i]<0)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}
