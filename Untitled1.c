#include<stdio.h>
int main ()
{
    int n, i;
    int arr[100];

    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Entered elements are:\n");
    for(i=0 ; i<n ; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
