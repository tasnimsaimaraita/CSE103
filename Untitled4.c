#include<stdio.h>
int main()
{
    int n,i,a[1000],max,min;
    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];

    for(i=0 ; i<n ; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Maximum :%d\n",max);
    printf("Minimum :%d",min);
    return 0;
}
