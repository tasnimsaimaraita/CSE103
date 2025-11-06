#include<Stdio.h>
int main()
{

    int n,i,a[1000],b[1000];

    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0 ; i<n ; i++)
    {
        b[i]=a[i];
    }

    printf("Elements of 2nd array:\n");
    for(i=0 ; i<n ; i++)
    {
        printf("%d ",b[i]);

    }

    return 0;
}
