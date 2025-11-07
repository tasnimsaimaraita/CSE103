
#include<stdio.h>
int main ()
{
    int n, i,sum=0;
    int arr[100];
    float avg;

    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0 ; i<n ; i++)
    {
        sum=sum+arr[i];
    }
    avg = (float)sum/n;
    printf("Average = %.2f\n",avg);

    return 0;
}

