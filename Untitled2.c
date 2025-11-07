#include<stdio.h>
int main ()
{
    int n, i,s=0;
    int arr[100];

    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0 ; i<n ; i++)
    {
        s=s+arr[i];
    }
    printf("sum of all elements are:%d\n",s);
    return 0;
}

