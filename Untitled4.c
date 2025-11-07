#include<stdio.h>
int main ()
{
    int n, i,min;
    int arr[100];

    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];

    for(i=1 ; i<n ; i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    printf("Minimun value is %d\n",min);
    return 0;
}


