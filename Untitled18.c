#include<stdio.h>
int main()
{
    int i,n1,max1,a1[1000];
    int n2,max2,a2[1000],sum;

    printf("Enter n1:\n");
    scanf("%d",&n1);

    scanf("Enter values of n1:\n");
    for(i=0 ; i<n1 ; i++)
    {
        scanf("%d",&a1[i]);
    }
    max1=a1[0];
    for(i=1 ; i<n1 ; i++)
    {
        if(a1[i]>max1)
        {
            max1=a1[i];
        }
    }

    printf("Enter n2:\n");
    scanf("%d",&n2);

    scanf("Enter values of n2:\n");
    for(i=0 ; i<n2 ; i++)
    {
        scanf("%d",&a2[i]);
    }
    max2=a2[0];
    for(i=1 ; i<n2 ; i++)
    {
        if(a2[i]>max2)
        {
            max2=a2[i];
        }
    }
    sum=max1 + max2;

    printf("Maximum value in first array = %d\n", max1);
    printf("Maximum value in second array = %d\n", max2);/
    printf("Sum of both max values = %d", sum);

    return 0;
}
