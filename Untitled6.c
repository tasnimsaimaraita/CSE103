#include<stdio.h>
int main()
{
    int n,i,max,min,a[1000];

    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter values:");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];

    for(i=1 ; i<n ; i++)
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
    printf("Maximum value %d\n",max);
    printf("Manimum value %d",min);
    return 0;

}

