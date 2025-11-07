#include<stdio.h>
int main ()
{
    int n, i,even=0,odd=0;
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
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Total even numbers is %d\n",even);
    printf("Total odd numbers is %d\n",odd);

    return 0;
}


