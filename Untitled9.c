#include<Stdio.h>

int main()
{
    int n,i,e,p,a[1000];
    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter the elements:\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to insert:\n");
    scanf("%d",&e);

    printf("Enter position to insert(1 to %d): ",n+1);
    scanf("%d",&p);

    if(p<1 || p>n+1)
    {
        printf("Invalid position\n");
        return 0;
    }
    for(i=n ; i>=p ; i--)
    {
        a[i]=a[i-1];
    }
    a[p-1] = e;

    n++;

    printf("Updated array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
