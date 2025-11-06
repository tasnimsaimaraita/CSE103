#include<Stdio.h>
int main()
{
    int n, i,c=0,a[1000];
    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0 ; i<n ; i++)
    {
        if(a[i]<0)
        {
            c++;
        }
    }
    printf("Total number of negative elements:%d",c);
    return 0;
}
