#include<stdio.h>
int main()
{
    int n,i,min,a[1000];

    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter values:");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }

    min=a[0];
    for(i=1 ; i<n ; i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Minimum value %d",min);
    return 0;
}



