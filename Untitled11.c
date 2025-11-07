#include<stdio.h>
int main ()
{
    int n, i;
    int a[100],m1,m2;

    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    m1=a[0];
    m2=a[0];

    for(i=1 ; i<n ; i++)
    {
        if(a[i]>m1)
        {
            m2=m1;
            m1=a[i];
        }
        else if(a[i]>m2 && a[i]!=m1)
        {
            m2=a[i];
        }
    }
    printf("2nd largest element:%d\n",m2);
    return 0;
}
