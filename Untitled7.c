#include<stdio.h>
int main ()
{
    int n, i;
    int a[1000],b[1000];

    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0 ; i<n ; i++){
        b[i]=a[i];
    }
    printf("Copyed elements are:\n");
    for(i=0 ; i<n ; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}


