#include<stdio.h>
int main()
{
    int n,i,a[10000];
    int p=0,ne=0,z=0;
    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0 ; i<n ; i++)
    {
        if(a[i]>0)
        {
            p++;
        }
        else if(a[i]<0)
        {
            ne++;
        }
        else
        {
            z++;
        }
    }
    printf("Positive =%d\n",p);
    printf("Negative =%d\n",ne);
    printf("Zero =%d\n",z);
    return 0;
}
