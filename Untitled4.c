#include<stdio.h>
int main()
{
    int n,i,max,a[1000];

    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter values:");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1 ; i<n ; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Maximum value %d",max);
    return 0;

}
