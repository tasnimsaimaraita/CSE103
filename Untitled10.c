#include<stdio.h>
int main()
{
    int n, i,a[1000],search,found=0;
    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d",&search);

    for(i=0 ; i<n ; i++)
    {
        if(a[i] == search)
        {
            found=1;
            break;
        }
    }
    if(found == 1)
    {
        printf("Element found");
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}

